#include <iostream>
#include <conio.h>
using namespace std;

class Account{
	private:
		string nome;
		float saldo;
	public:
		Account(): nome(""), saldo(0.0) {}
		Account(string nome, float saldo): nome(nome), saldo(saldo) {}
		Account(string nome): nome(nome), saldo(0.0){}
		
		string getNome()const{return this->nome;}
		float getSaldo()const{return this->saldo;}
		
		void setNome(string nome){this->nome=nome;}
		void setSaldo(float saldo){this->saldo=saldo;}
		
		void depositaGrana(float qtd);
		void retiraGrana(float qtd);
		
		void informaSaldo();
};

void Account::depositaGrana(float qtd){
	this->saldo+=qtd;
}

void Account::retiraGrana(float qtd){
	if(qtd>saldo){
		this->saldo=saldo-qtd-5;
	}
	else{
		this->saldo-=qtd;
	}
}

void Account::informaSaldo(){
	cout << "O saldo de " << nome << " é: " << saldo;
}
