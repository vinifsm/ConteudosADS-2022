#include <iostream>
#include <conio.h>
#include "Fornecedor.h"
using namespace std;

class Produto{
	private:
		int cod;
		string descricao;
		float valor;
		Fornecedor fornecedor;
	public:
		Produto(): cod(0), descricao(""), valor(0.0) {Fornecedor();}
		Produto(int cod, string descricao, float valor, Fornecedor fornecedor): cod(cod), descricao(descricao), valor(valor), fornecedor(fornecedor) {}
		
		int getCod() const {return this->cod;}
		string getDescricao() const {return this->descricao;}
		float getValor() const {return this->valor;}
		
		void setCod(int cod) {this->cod=cod;}
		void setDescricao(string descricao) {this->descricao=descricao;}
		void setValor(float valor) {this->valor=valor;}
		
		void alteraValor();
		void alteraValor(float perc);
		
		void print();
		void read();
};

void Produto::alteraValor(){
	this->valor=valor*1.2;
}

void Produto::alteraValor(float perc){
	this->valor=valor*(1+(perc/100));
}

void Produto::print(){
	cout << "\nDados do Produto";
	cout << "\nC�digo: " << cod;
	cout << "\nDescri��o: " << descricao;
	cout << "\nValor: " << valor;
	cout << "\nFornecedor: " << fornecedor.getNome();
	cout << "\nEndere�o do fornecedor: " << fornecedor.getEndereco();
}

void Produto::read(){
	int cod;
	string nome, endereco, telefone;
	cout << "\nLeitura dos Dados do Produto\n";
	cout << "Informe o c�digo: ";
	cin >> this->cod;fflush(stdin);
	cout << "Informe a descri��o: ";
	getline(cin,this->descricao);fflush(stdin);
	cout << "Informe o valor: ";
	cin >> this->valor;fflush(stdin);
	cout << "Informe o c�digo do fornecedor: ";
	cin >> cod;fornecedor.setCod(cod);fflush(stdin);
	cout << "Informe o nome do fornecedor: ";
	getline(cin,nome);fornecedor.setNome(nome);fflush(stdin);
	cout << "Informe o endere�o do fornecedor: ";
	getline(cin,endereco);fornecedor.setEndereco(endereco);fflush(stdin);
	cout << "Informe o telefone do fornecedor: ";
	cin >> telefone;fornecedor.setTelefone(telefone);fflush(stdin);
}



