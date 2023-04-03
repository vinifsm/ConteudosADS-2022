#include <iostream>
#include <conio.h>
#include "Pessoa.h"
using namespace std;

class Funcionario{
 	public:
 		Funcionario ();
 		Funcionario (string funcNome, float funSal);
 		
		void lerFunc ();
 		void impFunc();
 		
		void setSalario (float novoSal);
 		void setNomeFunc(string novoNome); 
 		
		float getSalario () const;
		string getNomeFunc () const; 
	
	private: 
		Pessoa dadosFunc;
 		float salario; 
};

Funcionario::Funcionario(){
	Pessoa();
	this->salario=0.0;
}

Funcionario::Funcionario(string funcNome, float funSal){
	dadosFunc.setNome(funcNome);
	this->salario=funSal;
}

float Funcionario::getSalario() const{
	return this->salario;
}

string Funcionario::getNomeFunc() const{
	return this->dadosFunc.getNome();
}

void Funcionario::setSalario(float novoSal){
	this->salario=novoSal;
}

void Funcionario::setNomeFunc(string novoNome){
	this->dadosFunc.setNome(novoNome);
}

void Funcionario::impFunc(){
	cout << "\nImprimir Dados do Funcionário\n";
	cout << "\nNome do Funcionário: " << dadosFunc.getNome();
	cout << "\nSalário do Funcionário: " << this->salario;
}

void Funcionario::lerFunc(){
	string nome;
	cout << "\nLer Dados do Funcionário";
	cout << "\nNome: ";
	getline(cin,nome);fflush(stdin);
	dadosFunc.setNome(nome);
	cout << "\nSalário: ";
	cin >> this->salario; fflush(stdin);
}
