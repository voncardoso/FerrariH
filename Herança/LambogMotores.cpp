#include "LambogMotores.h"
#include "Lamborghini.h"
#include "Carro.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;

LambogMotores::LambogMotores (int _potencia, int _roda, int _cor, int _modeloLamborg, int _multimidia,int _tipoMotor, int _escapamento):
Lamborghini ( _potencia,_roda, _cor,_modeloLamborg,_multimidia)
{
	this -> escapamento = _escapamento;
	
	this -> tipoMotor = _tipoMotor;

}


void LambogMotores::escolhaTipoMotor(int tipoMotor){
		cout << " \n --- TIPO DE MOTOR --- \n " ;
	
	if (this -> tipoMotor == 1 )
	{
		cout << " TIPO:  ELETRICO DE 500 CV \n " ;
	} else
		
		if (this -> tipoMotor == 2   )
		{
			cout << " TIPO: DISEL DE 600 \n " ;
		} else 
			
			if (this -> tipoMotor == 3 )
			{
				cout << " TIPO: HIBRIDO 500 CV NA COMBUSTAO E 150 CV NO ELETRICO\n " ;
			} 
}

void LambogMotores::tipoEscapamento(int escapamento)
{
		cout << " \n --- ESCAPAMENTO --- \n " ;
	
	if (this -> escapamento == 1 )
	{
		cout << "ESCAPAMENTO: NORMAL \n " ;
	} else
		
		if (this -> escapamento == 2   )
		{
			cout << "ESCAPAMENTO: DUPLO \n " ;
		} else 
			
			if (this -> escapamento== 3 )
			{
				cout << "ESCAPAMENTO : TRIPLO \n " ;
			} 
}

ostream &operator <<( ostream &out, const LambogMotores &Lambog)
{
	out <<" Carro: "<< static_cast <Carro> (Lambog) << ' \n ' ;
	out << Lambog.tipoMotor;
	out << Lambog.escapamento;
	

}

const LambogMotores LambogMotores:: operator = (const LambogMotores & LambogMotores) 
{
	tipoMotor = LambogMotores.tipoMotor;
	escapamento=LambogMotores.escapamento;
	
				
}

bool LambogMotores::operator ==(const LambogMotores &LambogMotores)
{
	if (escapamento == LambogMotores.escapamento)
	{
		return true;
	}else 
		return false;
		if (tipoMotor == LambogMotores.tipoMotor)
		{
			return true;
		}else
			return false;
}
 
int LambogMotores::operator !=(LambogMotores &LambogMotores)
{
	if (escapamento != LambogMotores.escapamento)
	{
		return 0;
	}else
		return 1;
		
			if (tipoMotor != LambogMotores.tipoMotor)
			{
				return 0;
			}else
				return 1;
}
LambogMotores::~LambogMotores()
{
	
}
