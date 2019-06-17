#include "FerrariMotores.h"
#include "Carro.h"
#include "Ferrari.h"

FerrariMotores::FerrariMotores(int _potencia, int _roda, int _cor, int _modeloFer, int _motor, int _aumentoPot):
	Ferrari(_potencia,_roda,_cor,_modeloFer)
{
	this -> motor = _motor;
	this -> aumentoPot = _aumentoPot;
}

void FerrariMotores::escolhaMotor(int motor, int uamentoPot, int _potencia)
{
	if (this -> motor == 1)
	{
		if (_potencia == 1)
		{
			cout << "MOTOR TURBO : 2.0 E 18V";
			uamentoPot = 500 + 110;
			cout << uamentoPot << " CV\n ";
		}else
			if (_potencia == 2)
			{
				cout << "MOTOR TURBO : 2.0 E 18V";
				uamentoPot = 650 + 110;
				cout << uamentoPot << " CV\n ";
			}else
				if (_potencia == 2)
				{
					cout << "MOTOR TURBO : 2.0 E 18V ";
					uamentoPot = 720 + 110;
					cout << uamentoPot << " CV\n";
				}else
					if (_potencia == 4)
					{
						cout << "MOTOR TURBO : 2.0 E 18V ";
						uamentoPot = 1000 + 110;
						cout << uamentoPot << " CV\n";
					}
			
	}else
		if (this -> motor == 2)
		{
			if (_potencia == 1)
			{
				cout << "MOTOR TURBO : 2.0 E 18V ";
				uamentoPot = 500 + 200;
				cout << uamentoPot << " CV\n";
			}else
				if (_potencia == 2)
				{
					cout << "MOTOR TURBO : 2.0 E 18V ";
					uamentoPot = 650 + 200;
					cout << uamentoPot << " CV\n";
				}else
					if (_potencia == 3)
					{
						cout << "MOTOR TURBO : 2.0 E 18V ";
						uamentoPot = 720 + 200;
						cout << uamentoPot << " CV\n";
				}else
					if (_potencia == 4)
					{
						cout << "MOTOR TURBO : 2.0 E 18V ";
						uamentoPot = 1000 + 200;
						cout << uamentoPot << " CV\n";
					}

}
}


ostream &operator<<( ostream &out, const FerrariMotores &FerrariMotores )
{
	out <<" Carro: "<< static_cast <Carro> (FerrariMotores) << ' \n ' ;
	out << "Motor: " <<FerrariMotores.motor;
	out << "Ganho na potencia" << FerrariMotores.aumentoPot;

}

const FerrariMotores FerrariMotores:: operator = (const FerrariMotores &FerrariMotores) 
{
	motor = FerrariMotores.motor;	
	aumentoPot = FerrariMotores.aumentoPot;			
}

bool FerrariMotores::operator == (const FerrariMotores &FerrariMotores)
{
	if (this -> aumentoPot == FerrariMotores.aumentoPot )
	{
		return true;
	}else 
		return false;
		
			if (this -> motor = FerrariMotores.motor)
			{
				return true;
			}else
				return false;
}

int FerrariMotores::operator !=(FerrariMotores &FerrariMotores)
{
	if (aumentoPot != FerrariMotores.aumentoPot)
	{
		return 0;
	}else
		return 1;
			if (motor != FerrariMotores.motor)
			{
				return 0;
			}else
				return 1;
}

FerrariMotores::~FerrariMotores()
{
	
}
