#include <iostream>
#include <conio.h>
#include "Pais.h"
using namespace std;
 
class Uva{
	protected:
		int cod;
		string nome;
		string cor;
		Pais paisOrigem;
	public:
		Uva(): cod(0), nome(""), cor("") {Pais();}
		Uva(int cod, string nome, string cor, Pais paisOrigem): cod(cod), nome(nome), cor(cor), paisOrigem(paisOrigem) {}
		
		const int getCod(){return this->cod;}
		const string getNome(){return this->nome;}
		const string getCor(){return this->cor;}
		Pais getPaisOrigem(){return this->paisOrigem;}
		
		void setCod(int cod){this->cod=cod;}
		void setNome(string nome){this->nome=nome;}
		void setCor(string cor){this->cor=cor;}
		void setPaisOrigem(Pais paisOrigem){this->paisOrigem=paisOrigem;}
				
};

