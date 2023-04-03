#include <conio.h>
#include <iostream>
using namespace std;

class Data{
	private:
		int dia;
		int mes;
		int ano;
		
	public:
		Data();
		Data(int,int,int);
		
		//get
		int getDia();
		int getMes();
		int getAno();
		
		//set
		void setDia(int);
		void setMes(int);
		void setAno(int);
		
		void imprimir();
		void ler();
};

	Data::Data(){
		this->dia=0;
		this->mes=0;
		this->ano=0;
	}
	
	Data::Data(int dia,int mes,int ano){
		this->dia=dia;
		this->mes=mes;
		this->ano=ano;
	}
	
	void Data::imprimir(){
		cout << "\n\nImprimir Data\n";
		cout << "Dia:" << dia;
		cout << "\nMês:" << mes;
		cout << "\nAno:" << ano;
	}
	
	void Data::ler(){
		cout << "\n\nLer Data\n";
		cout << "Informe o dia:";
		cin >> dia;
		
		cout << "Informe o mês:";
		cin >> mes;
		
		cout << "Informe o ano:";
		cin >> ano;
	}
	
	int Data::getDia(){
		return(this->dia);
	}
	
	int Data::getMes(){
		return(this->mes);
	}
	
	int Data::getAno(){
		return(this->ano);
	}
	
	void Data::setDia(int dia){
		this->dia=dia;
	}
	
	void Data::setMes(int mes){
		this->mes=mes;
	}
	
	void Data::setAno(int ano){
		this->ano=ano;
	}

