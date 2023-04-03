#include <iostream>
#include <conio.h>
using namespace std;

class Fabricante{
	protected:
		int cod;
		string nome;
	public:
		Fabricante(): cod(0), nome("") {}
		Fabricante(int cod, string nome): cod(cod), nome(nome) {}	
		
		const int getCod(){return this->cod;}
		const string getNome(){return this->nome;}
		
		void setCod(int cod){this->cod=cod;}
		void setNome(string nome){this->nome=nome;}
};
