#include <conio.h>
#include <iostream>
using namespace std;

class Processo{
	private:
		int id;
		string descricao;
		string dataEntrada;
		string horaEntrada;
		
	public:
		Processo();
		Processo(int,string,string,string);
		
		//get
		int getId();
		string getDescricao();
		string getDataEntrada();
		string getHoraEntrada();
		
		//set
		void setId(int);
		void setDescricao(string);
		void setDataEntrada(string);
		void setHoraEntrada(string);
		
		void imprimir();
		void ler();
};

	Processo::Processo(){
		this->id=0;
		this->descricao="";
		this->dataEntrada="";
		this->horaEntrada="";
	}
	
	Processo::Processo(int id,string descricao,string dataEntrada,string horaEntrada){
		this->id=id;
		this->descricao=descricao;
		this->dataEntrada=dataEntrada;
		this->horaEntrada=horaEntrada;
	}
	
	void Processo::imprimir(){
		cout << "\n\nImprimir os dados do Processo\n";
		cout << "ID:" << id;
		cout << "\nDescricao:"<<descricao;
		cout << "\nData de entrada:"<<dataEntrada;
		cout << "\nHora de entrada:"<<horaEntrada;
	}
	
	void Processo::ler(){
		cout << "\n\nLer dados do Processo\n";
		cout << "Informe o ID:";
		cin >> id;fflush(stdin);
		
		cout << "Informe a descrição:";
		getline(cin, descricao);fflush(stdin);
		
		cout << "Informe a data de entrada:";
		getline(cin, dataEntrada);fflush(stdin);
		
		cout << "Informe a hora de entrada:";	
		getline(cin, horaEntrada);fflush(stdin);
	}
	
	int Processo::getId(){
		return(this->id);
	}
	
	string Processo::getDescricao(){
		return(this->descricao);
	}
	
	string Processo::getDataEntrada(){
		return(this->dataEntrada);
	}
	
	string Processo::getHoraEntrada(){
		return(this->horaEntrada);
	}
	
	void Processo::setId(int id){
		this->id=id;
	}
	
	void Processo::setDescricao(string descricao){
		this->descricao=descricao;
	}
	
	void Processo::setDataEntrada(string dataEntrada){
		this->dataEntrada=dataEntrada;
	}
		
	void Processo::setHoraEntrada(string horaEntrada){
		this->horaEntrada=horaEntrada;
	}
