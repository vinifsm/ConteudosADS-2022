#include <iostream>
#include <conio.h>
using namespace std;

class Fornecedor{
	protected:
		int cod;
		string nome;
		string endereco;
		string telefone;
	public:
		Fornecedor(): cod(0), nome(""), endereco(""), telefone("") {}
		Fornecedor(int cod, string nome, string endereco, string telefone): cod(cod), nome(nome), endereco(endereco), telefone(telefone) {}
		
		int getCod() const {return this->cod;}
		string getNome() const {return this->nome;}
		string getEndereco() const {return this->endereco;}
		string getTelefone() const {return this->telefone;}
		
		void setCod(int cod) {this->cod=cod;}
		void setNome(string nome) {this->nome=nome;}
		void setEndereco(string endereco) {this->endereco=endereco;}
		void setTelefone(string telefone) {this->telefone=telefone;}
};		
