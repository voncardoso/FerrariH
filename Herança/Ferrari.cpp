
#include "Ferrari.h"

using std::string;
using namespace std;
using std::cout;
using std::cin;


Ferrari::Ferrari(int _potencia, int _roda, int _cor, int _modeloFer)
: Carro (_potencia,_roda,_cor)
{
	this -> modeloFer= _modeloFer;
}

Ferrari::Ferrari(const Ferrari &fer)
{
	fer.modeloFer;
}

void Ferrari::escolhaModeloFer(int modeloFer)
{
	
		cout << " \n --- MODELO --- \n " ;
	
	if (this -> modeloFer == 1 )
	{
		cout << " TIPO: 812 Superfast \n " ;
	} else
		
		if (this ->modeloFer == 2   )
		{
			cout << " TIPO: F8 Tributo \n " ;
		} else 
			
			if (this ->modeloFer == 3 )
			{
				cout << " TIPO: Ferrari 488 Pista \n " ;
			} else
				
				if (this ->modeloFer == 4 )
				{
					cout << " TIPO: Ferrari 488 Pista Spider \n " ;
				}

}

ostream &operator<<( ostream &out, const Ferrari &fer )
{
	out << "MODELO DA FERRARI : " << fer.modeloFer;
}

const Ferrari Ferrari:: operator = (const Ferrari &fer) 
{
	modeloFer = fer.modeloFer;				
}


bool Ferrari::operator == (const Ferrari &fer)
{
	if (this -> modeloFer == fer.modeloFer )
	{
		return true;
	}else 
		return false;
}

int Ferrari::operator !=(Ferrari &Fer)
{
	if (this -> modeloFer != Fer.modeloFer)
	{
		return 0;
	}else
		return 1;
}

Ferrari::~Ferrari()
{
	
}
