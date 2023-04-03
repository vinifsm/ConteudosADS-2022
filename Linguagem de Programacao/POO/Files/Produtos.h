#include <iostream>
#include <conio.h>
using namespace std;

class Produtos{
	private:
		int id;
		string descricao;
		float quantidade;
		float valor;
	public:
		void ler();
		void imprimir();
		
		int getId();
		string getDescricao();
		float getQuantidade();
		float getValor();

		void setId(int x);
		void setDescricao(string x);
		void setQuantidade(float x);
		void setValor(float x);
};

void Produtos::ler(){
	cout << "\nLer Dados do Produto\n";
    cout << "\nInforme o ID: ";
    cin >> id; fflush(stdin);

    cout << "Informe a descrição: ";
    getline(cin, descricao); fflush(stdin);

    cout << "Informe a quantidade: ";
    cin >> quantidade; fflush(stdin);
    	
    cout << "Informe o valor: ";
    cin >> valor; fflush(stdin);
	}
	
void Produtos::imprimir (){
	cout << "\nImprimir Dados do Produto\n";
	cout << "\nID: "<<id;
	cout << "\nDescrição: "<<descricao;
	cout << "\nQuantidade: "<<quantidade;
	cout << "\nValor: "<<valor;
}

int Produtos::getId(){
	return(id);
}

string Produtos::getDescricao(){
	return(descricao);
}		

float Produtos::getQuantidade(){
	return(quantidade);
}

float Produtos::getValor(){
	return(valor);
}

void Produtos::setId(int x){
	id=x;
}

void Produtos::setDescricao(string x){
	descricao=x;
}

void Produtos::setQuantidade(float x){
	quantidade=x;
}
	
void Produtos::setValor(float x){
	valor=x;
}

