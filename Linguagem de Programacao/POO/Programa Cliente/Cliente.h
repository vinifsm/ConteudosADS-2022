#include <iostream>
using namespace std;

//interface da classe
class Cliente{
	private://atributos cliente (privado)
		int id;
		string nome;
		float saldo;
	
	public://metodos cliente
		void ler();
		void imprimir();
		
		float getSaldo();//get set do saldo
		void setSaldo(float x);
		
		string getNome();//get set do nome
		void setNome(string x);
		
		int getId();//get set do id
		void setId(int x);
			
};

void Cliente::ler(){//metodo para leitura
	cout << "\nDigite o número de identificação: ";
	cin >> id;fflush(stdin);
	cout << "\nDigite o nome: ";
	getline (cin, nome);fflush(stdin);
	cout << "\nDigite o saldo: ";
	cin >> saldo;fflush(stdin);
}

void Cliente::imprimir(){//metodo para imprimir o cliente (objeto) lido
	cout << "\nDados";
	cout << "\nID: "<<id;
	cout << "\nNome: "<<nome;
	cout << "\nSaldo: "<<saldo;
}

//getters e setters
float Cliente::getSaldo(){
	return this->saldo;
}

void Cliente::setSaldo(float x){
	saldo=x;
}

string Cliente::getNome(){
	return this->nome;
}

void Cliente::setNome(string x){
	nome=x;
}

int Cliente::getId(){
	return this->id;
}

void Cliente::setId(int x){
	id=x;
}
