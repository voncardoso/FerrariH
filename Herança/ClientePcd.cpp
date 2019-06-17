#include "ClientePcd.h"
#include "Cliente.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;


ClientePcd::ClientePcd ( const string &_nome, const string &_sobreNome, int _idade, const string &_tipoDeficiencia ):
	Cliente(_nome, _sobreNome,_idade)
{
	this -> tipoDeficiencia = _tipoDeficiencia;
}

ClientePcd::ClientePcd(const ClientePcd &ClientePcd)
{
	this -> tipoDeficiencia = ClientePcd.tipoDeficiencia;
}

ClientePcd::~ClientePcd()
{
	
}

void ClientePcd::mensagem2( )
{
	cout << "\n Deficiencia: " << tipoDeficiencia ;
}

const ClientePcd ClientePcd::operator =( const ClientePcd &ClientePcd)
{
	tipoDeficiencia	= ClientePcd.tipoDeficiencia; 
}

ostream &operator << (ostream &output, const ClientePcd &ClientePcd)
{
	output << ClientePcd.tipoDeficiencia; 
	return output;
}

bool ClientePcd::operator==(const ClientePcd &ClientePcd)
{
	if (tipoDeficiencia == ClientePcd.tipoDeficiencia)
	{
		return true;
	}else
		return false;
}


int ClientePcd::operator!= (ClientePcd &ClientePcd )
{
	if (tipoDeficiencia == ClientePcd.tipoDeficiencia )
		return 0;
	else
		return 1;
}


