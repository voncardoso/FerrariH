#include "ClienteEmpresa.h"
#include "Cliente.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;


ClienteEmpresa::ClienteEmpresa ( const string &_nome, const string &_sobreNome, int _idade, float _cnpj ):
	Cliente(_nome, _sobreNome,_idade)
{
	this -> cnpj = _cnpj;
}

ClienteEmpresa::ClienteEmpresa(const ClienteEmpresa &ClienteEmpresa)
{
	this -> cnpj = ClienteEmpresa.cnpj;
}

ClienteEmpresa::~ClienteEmpresa()
{
	
}

void ClienteEmpresa::mensagem2( )
{
	cout << "\n CNPJ: " << cnpj ;
}

const ClienteEmpresa ClienteEmpresa::operator =( const ClienteEmpresa &ClienteEmpresa)
{
	cnpj	= ClienteEmpresa.cnpj; 
}

ostream &operator << (ostream &output, const ClienteEmpresa &ClienteEmpresa)
{
	output << ClienteEmpresa.cnpj; 
	return output;
}

bool ClienteEmpresa::operator==(const ClienteEmpresa&ClienteEmpresa)
{
	if (cnpj == ClienteEmpresa.cnpj)
	{
		return true;
	}else
		return false;
}


int ClienteEmpresa::operator!= (ClienteEmpresa &ClienteEmpresa )
{
	if (cnpj == ClienteEmpresa.cnpj )
		return 0;
	else
		return 1;
}


