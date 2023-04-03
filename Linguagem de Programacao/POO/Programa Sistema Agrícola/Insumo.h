#include <conio.h>
#include <iostream>
#include "TipoInsumo.h"
using namespace std;

class Insumo: public TipoInsumo{
	protected:
		int id;
		string descricao;
		float quantidade;
		float valor;
	public:
		Insumo();
		Insumo(int idInsumo, string descInsumo, float quantidade, float valor,int idTipo, string descTipo);
		
		int getId();
		string getDescricao();
		float getQuantidade();
		float getValor();
		int getIdTipoInsumo();
		string getDescricaoTipoInsumo();
	
		void setId(int id);
		void setDescricao (string descricao);
		void setQuantidade (float quantidade);
		void setValor(float valor);
		void setIdTipoInsumo(int id);
		void setDescricaoTipoInsumo(string descricao);
		
		void imprimir();
		void ler();
};

Insumo::Insumo(){
	this->id=0;
	this->descricao="";
	this->quantidade=0.0;
	this->valor=0.0;
	TipoInsumo();
}
Insumo::Insumo(int idInsumo, string descInsumo, float quantidade, float valor, int idTipo, string descTipo){
	this->id=idInsumo;
	this->descricao=descInsumo;
	this->quantidade=quantidade;
	this->valor=valor;
	TipoInsumo::id=idTipo;
	TipoInsumo::descricao=descTipo;	
}
		
int Insumo::getId(){
return(this->id);	
}
string Insumo::getDescricao(){
return(this->descricao);
}
float Insumo::getQuantidade(){
return(this->quantidade);
}
float Insumo::getValor(){
return(this->valor);
}
int Insumo::getIdTipoInsumo(){
return(TipoInsumo::id);
}
string Insumo::getDescricaoTipoInsumo(){
return(TipoInsumo::descricao);
}	
void Insumo::setId(int id){
this->id=id;
}
void Insumo::setDescricao (string descricao){
this->descricao=descricao;
}
void Insumo::setQuantidade (float quantidade){
this->quantidade=quantidade;
}
void Insumo::setValor(float valor){
this->valor=valor;
}
void Insumo::setIdTipoInsumo(int id){
TipoInsumo::id=id;
}
void Insumo::setDescricaoTipoInsumo(string descricao){
TipoInsumo::descricao=descricao;
}
	
void Insumo::imprimir(){
	cout << "\n\nDados do Insumo";
	cout << "\nID:" << id;
	cout << "\nDescricao:"<<descricao;
	cout << "\nQuantidade:"<<quantidade;
	cout << "\nValor:"<<valor;
	cout << "\nID do Tipo do Insumo:"<<TipoInsumo::id;
	cout << "\nDescricao do Tipo do Insumo:"<<TipoInsumo::descricao;
}
void Insumo::ler(){
    cout << "\n\nLer os dados do Insumo";
	cout << "\nDigite o ID:";
	cin >> id; fflush(stdin);
	
	cout << "Digite a Descricao:";
	getline(cin, descricao); fflush(stdin);
	
	cout << "Digite a Quantidade:";
	cin >> quantidade; fflush(stdin);
	
	cout << "Digite o Valor:";
	cin >> valor; fflush(stdin);
	
	cout << "Digite o ID do Tipo do Insumo:";
	cin >> TipoInsumo::id; fflush(stdin);
	
	cout << "Digite a descrição do Tipo do Insumo:";
	getline(cin, TipoInsumo::descricao); fflush(stdin);
}
