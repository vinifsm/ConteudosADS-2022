#include <conio.h>
#include <iostream>
#include <sstream>
using namespace std;

class Data{
	private:
		int dia;
		int mes;
		int ano;
		
	public:
		Data():dia(1),mes(1),ano(1500){}
		Data(int,int,int);
		
		//get
		int getDia();
		int getMes();
		int getAno();
		string getDataString();
		
		//set
		void setDia(int);
		void setMes(int);
		void setAno(int);
		
		void imprimir();
		void ler();
};

	/*Data::Data(){
		this->dia=1;
		this->mes=1;
		this->ano=1500;
	}
	*/
	
	Data::Data(int dia,int mes,int ano){
		setAno(ano);
		setMes(mes);
		setDia(dia);
	}
	
	void Data::imprimir(){
		cout << "Data: ";
		cout << dia
			 << "\\" << mes
		    << "\\" << ano << endl;
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
	
	string Data::getDataString(){
		stringstream data;
		data << this->dia << "/" << this->mes << "/" << this->ano;
		return data.str();
	}
	
	void Data::setDia(int dia){
		if(mes==2){
			if((ano % 4 == 0) || (ano % 400 == 0) && (ano % 100 != 0)){
				if(dia>0 && dia<30)
					this->dia=dia;
				else this->dia=1;
			}
			else{
				if(dia>0 && dia<29)
					this->dia=dia;
				else this->dia=1;	
			} 
		}
		else {
			if (mes==4||mes==6||mes==9||mes==11){
				if(dia>0 && dia<31)
				this->dia=dia;
				else this->dia=1;				
			}
			else{
				if(dia>0 && dia<32)
					this->dia=dia;			
				else this->dia=1;
			}
		}
	}
	
	void Data::setMes(int mes){
		if(mes<=12 && mes>=0){
		this->mes=mes;	
		}
		else {
		this->mes=1;	
		}
	}
	
	void Data::setAno(int ano){
		if(ano>=1900 && ano<2100){
		this->ano=ano;	
		}
		else this->ano=1900;
	}

