#include <iostream>
#include <conio.h>
using namespace std;

class Pessoa{
	public:
		Pessoa ();
		Pessoa (string nome, int idade);
 		
		void lerPessoa();
 		void impPessoa();
		
		string getNome () const; 
		int getIdade() const; 
 		
		void setNome (string);
 		void setIdade(int);
	
	private:
		string nome; 
		int idade; 
};

Pessoa::Pessoa(){
	this->nome="";
	this->idade=0;
}

Pessoa::Pessoa(string nome, int idade){
	this->nome=nome;
	this->idade=idade;
}

string Pessoa::getNome() const{
	return this->nome;
}

int Pessoa::getIdade() const{
	return this->idade;
}

void Pessoa::setNome(string nome){
	this->nome=nome;
}

void Pessoa::setIdade(int idade){
	this->idade=idade;
}

void Pessoa::impPessoa(){
	cout << "\nImprimir Dados da Pessoa";
	cout << "\nNome: " << this->nome;
	cout << "\nIdade: " << this->idade; 
}

void Pessoa::lerPessoa(){
	cout << "\nLer Dados da Pessoa\n";
	cout << "Informe o nome: ";
	getline(cin,nome);fflush(stdin);
	cout << "Informe a idade: ";
	cin >> idade;fflush(stdin);
}
