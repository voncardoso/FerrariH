#ifndef CLIENTEEMPRESA_H
#define CLIENTEEMPRESA_H
#include "Cliente.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;
class ClienteEmpresa: public Cliente
{

	friend ostream & operator << (ostream &, const ClienteEmpresa &);
	
	public:
		ClienteEmpresa (const string &, const string &, int, float);
		
		ClienteEmpresa ();
		
		ClienteEmpresa (const ClienteEmpresa &);
		
		virtual	~ClienteEmpresa ();
		
		void  mensagem2 ();
    
	
		void  infoCliente () const ;
	    
	    const ClienteEmpresa operator=(const ClienteEmpresa &);
			
		int operator != (ClienteEmpresa &);
			
		bool operator==(const ClienteEmpresa &);
	
		private:
			float cnpj;
			

		


};

#endif
