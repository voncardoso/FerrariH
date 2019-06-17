#ifndef LANDROUVERPASSAGEIROS_H
#define LANDROUVERPASSAGEIROS_H
#include "Carro.h"
#include "LandRouver.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;

class LandRouverPassageiros : public LandRouver
{
		friend ostream & operator << (ostream &, const LandRouverPassageiros &);
	public:
		LandRouverPassageiros (int, int, int, int , int, int, int);
		
		LandRouverPassageiros (const LandRouverPassageiros &);
		
		LandRouverPassageiros();
					
		void escolhaQuantLugares (int);
		
		void escolhaTracao (int);
		
		const LandRouverPassageiros operator = (const LandRouverPassageiros &);
		
		int operator != (LandRouverPassageiros &);
		
		bool operator == (const LandRouverPassageiros &);
		
		
	private:
		int quantLugares;
		int tracao;
};

#endif
