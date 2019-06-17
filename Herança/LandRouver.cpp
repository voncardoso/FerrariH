#include "LandRouver.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Carro.h"

LandRouver::LandRouver(int _potencia, int _roda, int _cor, int _modeloLand, int _tipoTetoSolar)
: Carro (_potencia,  _roda,  _cor)
{
	this -> modeloLand = _modeloLand;
	this -> tipoTetoSolar = _tipoTetoSolar;
}

void LandRouver::escolhaLandRouver(int modeloLand)
{
		cout << " \n --- MODELO --- \n " ;
	
	if (this -> modeloLand == 1 )
	{
		cout << " TIPO: VELAR \n " ;
	} else
		
		if (this -> modeloLand == 2   )
		{
			cout << " TIPO: DISCOVERY   \n " ;
		} else 
			
			if (this -> modeloLand == 3 )
			{
				cout << " TIPO: DISCOVERY SPORT \n " ;
			} else
				
				if (this -> modeloLand == 4 )
				{
					cout << " TIPO: RANGER ROUVER EVOQUE  \n " ;
				}
}

void LandRouver::tetoSolar(int tipoTetoSolar)
{
			cout << " \n --- TETO SOLAR --- \n " ;
	
	if (this -> tipoTetoSolar == 1 )
	{
		cout << " TIPO: teto solar normal \n " ;
	} else
		
		if (this -> tipoTetoSolar == 2   )
		{
			cout << " TIPO: teto solar panoramico \n " ;
		} 
}

ostream &operator<<( ostream &out, const LandRouver &LandRouver )
{
	out << LandRouver.tipoTetoSolar;
	out << LandRouver.modeloLand;
}

const LandRouver LandRouver:: operator = (const LandRouver &LandRouver) 
{
	modeloLand = LandRouver.modeloLand;
	tipoTetoSolar = LandRouver.tipoTetoSolar;
}

bool LandRouver::operator ==(const LandRouver &LandRouver)
{
	if (modeloLand == LandRouver.modeloLand)
	{
		return true;
	}else 
		return false;
		if (tipoTetoSolar == LandRouver.tipoTetoSolar)
		{
			return true;
		}else
			return false;
}
 
int LandRouver::operator !=(LandRouver &LandRouver)
{
	if (modeloLand != LandRouver.modeloLand)
	{
		return 0;
	}else
		return 0;
}

LandRouver::~LandRouver()
{
	
}
