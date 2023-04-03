#include <iostream>
#include <conio.h>
#include "Uva.h"
#include "Fabricante.h"
using namespace std;

class Vinho: public Uva {
	protected:
		int cod;
		Fabricante fabricante;
		string nome;
		float valor;
	public:
		Vinho(): cod(0), nome(""), valor(0.0) {Fabricante();Uva();}
		Vinho(int codVinho, Fabricante fabricante, string nomeVinho, float valor, int codUva, string nomeUva, string cor, Pais paisOrigem);
		
		const int getCod(){return this->cod;}
		Fabricante getFabricante(){return this->fabricante;}
		const string getNome(){return this->nome;}
		const float getValor(){return this->valor;}
		const int getUvaCod(){return Uva::cod;}
		const string getUvaNome(){return Uva::nome;}
		const string getUvaCor(){return Uva::cor;}
		Pais getUvaPaisOrigem(){return Uva::paisOrigem;}
		
		void setCod(int cod){this->cod=cod;}
		void setFabricante(Fabricante fabricante){this->fabricante=fabricante;}
		void setNome(string nome){this->nome=nome;}
		void setValor(float valor){this->valor=valor;}
		void setUvaCod(int cod){Uva::cod=cod;}
		void setUvaNome(string nome){Uva::nome=nome;}
		void setUvaCor(string cor){Uva::cor=cor;}
		void setUvaPaisOrigem(Pais paisOrigem){Uva::paisOrigem=paisOrigem;}

		void alteraValor(float perc);
		void alteraValor();
};

Vinho::Vinho(int codVinho, Fabricante fabricante, string nomeVinho, float valor, int codUva, string nomeUva, string cor, Pais paisOrigem){
	this->cod=codVinho;
	this->fabricante=fabricante;
	this->nome=nomeVinho;
	this->valor=valor;
	Uva::cod=codUva;
	Uva::nome=nomeUva;
	Uva::cor=cor;
	Uva::paisOrigem=paisOrigem;
}

void Vinho::alteraValor(float perc){
	this->valor=valor*(1+(perc/100));
}

void Vinho::alteraValor(){
	this->valor=valor*1.05;
}

