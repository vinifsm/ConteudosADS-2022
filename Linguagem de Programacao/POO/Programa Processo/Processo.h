#include <conio.h>
#include <iostream>
#include "TipoProcesso.h"
using namespace std;

class Processo: public TipoProcesso{
	private:
		int id;
		string descricao;
		Data entrada;
		string hora;
		
	public:
		Processo();
		Processo(int,string,int, string, Data, string);
		
		int getId(){return this->id;}
		string getDescricao(){return this->descricao;}
		string getHora(){return this->hora;}
		int getIdTipoProcesso(){return TipoProcesso::id;}		
		string getDescricaoTipoProcesso(){return TipoProcesso::descricao;}
		Data getEntrada() {return this->entrada;}
		
		void setId(int id){this->id=id;}
		void setDescricao(string desc){this->descricao=desc;}
		void setHora(string hora){this->hora=hora;}
		void setIdTipoProcesso(int id){TipoProcesso::id=id;}
		void setDescricaoTipoProcesso(string desc){TipoProcesso::descricao=desc;}
		void setEntrada(Data entrada){this->entrada=entrada;}
		
		void imprimir();
};

	Processo::Processo(){
		TipoProcesso();
		this->id=0;
		this->descricao="";
		this->entrada = Data();
		this->hora="";
	}
	
	Processo::Processo(int idTp,string descTp,int idProc,string descProc,Data entrada, string hora){
		TipoProcesso::id = idTp;
		TipoProcesso::descricao = descTp;
		this->id=idProc;
		this->descricao=descProc;
		this->entrada=entrada;
		this->hora=hora;
	}
	

void Processo::imprimir(){
	cout << "\nImprimir Processo\n";
	cout << "Processo ID: " << this->id << endl;
	cout << "Processo descricao: " << this->descricao << endl;
	cout << "Tipo Processo ID: " << TipoProcesso::getId() << endl;  
	cout << "Tipo Processo Descricao: " << TipoProcesso::descricao << endl;
	cout << "Data: " << entrada.getDataString() << endl;
	cout << "Hora: " << this->hora << endl;
}
