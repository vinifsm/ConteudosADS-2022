#include <iostream>
#include <conio.h>
using namespace std;

class Pais{
	protected:
		int cod;
		string nome;
		string lingua;
	public:
		Pais(): cod(0), nome(""), lingua("") {}
		Pais(int cod, string nome, string lingua): cod(cod), nome(nome), lingua(lingua) {}

		const int getCod(){return this->cod;}
		const string getNome(){return this->nome;}
		const string getLingua(){return this->lingua;}
		
		void setCod(int cod){this->cod=cod;}
		void setNome(string nome){this->nome=nome;}
		void setLingua(string lingua){this->lingua=lingua;}
};
