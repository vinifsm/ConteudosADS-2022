#include <iostream>
#include <conio.h>
using namespace std;

class Address{
	private:
		string rua;
		int numero;
		int numeroAp;
		string cidade;
		string uf;
		int cep;
	public:
		Address(): rua(""), numero(0), numeroAp(0), cidade(""), uf(""), cep(0) {}
		Address(string,int,string,string,int);
		Address(string,int,int,string,string,int);
		
		int getCep() const{return this->cep;}
		
		void setCep(int cep){this->cep=cep;}
		
		void print();
};

Address::Address(string rua,int numero,string cidade,string uf,int cep){
	this->rua=rua;
	this->numero=numero;
	this->cidade=cidade;
	this->uf=uf;
	this->cep=cep;
}

Address::Address(string rua,int numero,int numeroAp,string cidade,string uf,int cep){
	this->rua=rua;
	this->numero=numero;
	this->numeroAp=numeroAp;
	this->cidade=cidade;
	this->uf=uf;
	this->cep=cep;
}

void Address::print(){
	cout << "\nImprimir Dados do Endereço\n";
	cout << rua << " - " << numero << endl;
	cout << cidade << " - " << uf << " - " << cep << endl;
}
