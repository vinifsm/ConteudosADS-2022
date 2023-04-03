#include <iostream>
#include <conio.h>
using namespace std;

class Conta{
	private:
		int numConta;
		string titular;
		float saldo;
	public:	
		Conta();
		Conta(int, string, float);
		Conta(int, string);
		
		void imprimir();
		
		int getNum();
		string getTitular();
		float getSaldo();
		
		void setNum(int x);
		void setTitular(string x);
		void setSaldo(float x);
	};
	
Conta::Conta(){
	this->numConta = 0;
	this->titular = "Sem Nome";
	this->saldo = 0;
}

Conta::Conta(int numConta, string titular){
	this->numConta = numConta;
	this->titular = titular;
	this->saldo=0;
}

Conta::Conta(int numConta, string titular, float saldo){
	this->numConta = numConta;
	this->titular = titular;
	this->saldo = saldo;	
}

void Conta::imprimir(){
	cout << "\n\nImprimir Conta\n";
	cout << "\nNúmero: "<<this->numConta;
	cout << "\nTitular: "<<this->titular;
	cout << "\nSaldo: "<<this->saldo;
}

int Conta::getNum(){
	return(numConta);
}
string Conta::getTitular(){
	return(titular);
}
float Conta::getSaldo(){
	return(saldo);
}
		
void Conta::setNum(int x){
	numConta=x;
}
void Conta::setTitular(string x){
	titular=x;
}
void Conta::setSaldo(float x){
	saldo=x;
}
