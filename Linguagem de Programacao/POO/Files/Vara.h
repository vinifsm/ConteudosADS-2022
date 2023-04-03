#include <conio.h>
#include <iostream>
using namespace std;

class Vara{
	private:
		int id;
		string juiz;
		float valorCausa;
		
	public:
		Vara();
		Vara(int,string,float);
		
		//get
		int getId();
		string getJuiz();
		float getValorCausa();
		
		//set
		void setId(int);
		void setJuiz(string);
		void setValorCausa(float);
		
		void imprimir();
		void ler();
};

	Vara::Vara(){
		this->id=0;
		this->juiz="";
		this->valorCausa=0.0;
	}
	
	Vara::Vara(int id,string juiz,float valorCausa){
		this->id=id;
		this->juiz=juiz;
		this->valorCausa=valorCausa;
	}
	
	void Vara::imprimir(){
		cout << "\n\nImprimir os dados da Vara\n";
		cout << "ID:" << id;
		cout << "\nJuiz:"<<juiz;
		cout << "\nValor da Causa:"<<valorCausa;
	}
	
	void Vara::ler(){
		cout << "\n\nLer dados da Vara\n";
		cout << "Informe o ID:";
		cin >> id;fflush(stdin);
		
		cout << "Informe o Juiz:";
		getline(cin, juiz);fflush(stdin);
		
		cout << "Informe o valor da causa:";
		cin >> valorCausa;fflush(stdin);
	}
	
	int Vara::getId(){
		return(this->id);
	}
	
	string Vara::getJuiz(){
		return(this->juiz);
	}
	
	float Vara::getValorCausa(){
		return(this->valorCausa);
	}

	
	void Vara::setId(int id){
		this->id=id;
	}
	
	void Vara::setJuiz(string juiz){
		this->juiz=juiz;
	}
	
	void Vara::setValorCausa(float valorCausa){
		this->valorCausa=valorCausa;
	}
