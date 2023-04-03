#include <conio.h>
#include <iostream>
using namespace std;

class TipoProcesso{
	private:
		int id;
		string descricao;
		
	public:
		TipoProcesso();
		TipoProcesso(int,string);
		
		//get
		int getId();
		string getDescricao();
		
		//set
		void setId(int);
		void setDescricao(string);
		
		void imprimir();
		void ler();
};

	TipoProcesso::TipoProcesso(){
		this->id=0;
		this->descricao="";
	}
	
	TipoProcesso::TipoProcesso(int id,string descricao){
		this->id=id;
		this->descricao=descricao;
	}
	
	void TipoProcesso::imprimir(){
		cout << "\n\nImprimir os dados do Tipo de Processo\n";
		cout << "ID:" << id;
		cout << "\nDescricao:"<<descricao;
	}
	
	void TipoProcesso::ler(){
		cout << "\n\nLer dados do Tipo de Processo\n";
		cout << "Informe o ID:";
		cin >> id;fflush(stdin);
		
		cout << "Informe a descrição:";
		getline(cin, descricao);fflush(stdin);
	}
	
	int TipoProcesso::getId(){
		return(this->id);
	}
	
	string TipoProcesso::getDescricao(){
		return(this->descricao);
	}
	
	void TipoProcesso::setId(int id){
		this->id=id;
	}
	
	void TipoProcesso::setDescricao(string descricao){
		this->descricao=descricao;
	}
