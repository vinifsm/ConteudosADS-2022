#include <conio.h>
#include <iostream>
using namespace std;

class Agricultor{
	protected:
		int id;
		string cidade;
		string nome;
		string bairro;
		int idade;
	public:
		Agricultor();
		Agricultor(int id, string cidade, string nome, string bairro, int idade);
		
		int getId();
		string getCidade();
		string getNome();
		string getBairro();
		int getIdade();
		
		void setId(int id);
		void setCidade (string cidade);
		void setNome (string nome);
		void setBairro(string bairro);
		void setIdade(int idade);
		
		void imprimir();
		void ler();
};

Agricultor::Agricultor(){
this->id=0;
this->cidade="";
this->nome="";
this->bairro="";
this->idade=0;	
}
Agricultor::Agricultor(int id, string cidade, string nome, string bairro, int idade){
this->id=id;
this->cidade=cidade;
this->nome=nome;
this->bairro=bairro;
this->idade=idade;	
}
		
int Agricultor::getId(){
return(this->id);	
}
string Agricultor::getCidade(){
return(this->cidade);
}
string Agricultor::getNome(){
return(this->nome);
}
string Agricultor::getBairro(){
return(this->bairro);
}
int Agricultor::getIdade(){
return(this->idade);
}
		
void Agricultor::setId(int id){
this->id=id;
}
void Agricultor::setCidade (string cidade){
this->cidade=cidade;
}
void Agricultor::setNome (string nome){
this->nome=nome;
}
void Agricultor::setBairro(string bairro){
this->bairro=bairro;
}
void Agricultor::setIdade(int idade){
this->idade=idade;
}
		
void Agricultor::imprimir(){
	cout << "\n\nDados do Agricultor";
	cout << "\nID:" << id;
	cout << "\nCidade:"<<cidade;
	cout << "\nNome:"<<nome;
	cout << "\nBairro:"<<bairro;
	cout << "\nIdade:"<<idade;
}
void Agricultor::ler(){
	cout << "\n\nLeitura dos dados do Agricultor";
	cout << "\nDigite o ID:"; 
	cin >> id;fflush(stdin);
	
	cout << "Digite a Cidade:";
	getline(cin, cidade);fflush(stdin);
	
	cout << "Digite o Nome:";
	getline(cin, nome);fflush(stdin);
	
	cout << "Digite o Bairro:";
	getline(cin, bairro);fflush(stdin);
	
	cout << "Digite a Idade:";
	cin >> idade;fflush(stdin);
}
