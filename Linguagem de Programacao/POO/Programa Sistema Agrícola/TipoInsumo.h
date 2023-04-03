#include <conio.h>
#include <iostream>
using namespace std;

class TipoInsumo{
	protected:
		int id;
		string descricao;
	public:
		TipoInsumo();
		TipoInsumo(int id, string descricao);
		
		int getId();
		string getDescricao();
	
		void setId(int id);
		void setDescricao (string descricao);
		
		void imprimir();
		void ler();
};

TipoInsumo::TipoInsumo(){
this->id=0;
this->descricao="";
}
TipoInsumo::TipoInsumo(int id, string descricao){
this->id=id;
this->descricao=descricao;
}
		
int TipoInsumo::getId(){
return(this->id);
}
string TipoInsumo::getDescricao(){
return(this->descricao);
}
	
void TipoInsumo::setId(int id){
this->id=id;
}
void TipoInsumo::setDescricao (string descricao){
this->descricao=descricao;
}
		
void TipoInsumo::imprimir(){
	cout << "\n\nDados do Tipo de Insumo";
	cout << "\nID:" << id;
	cout << "\nDescricao:"<<descricao;
}
void TipoInsumo::ler(){
    cout << "\n\nLer os dados do Tipo de Insumo";
	cout << "\nDigite o ID:";
	cin >> id; fflush(stdin);
	
	cout << "Digite a Descricao:";
	getline(cin, descricao); fflush(stdin);
}
