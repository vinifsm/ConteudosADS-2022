#include <conio.h>
#include <iostream>
using namespace std;

class Advogado{
	private:
		int id;
		string nome;
		string cidade;
		string estado;
		int idade;
		
	public:
		Advogado();
		Advogado(int,string,string,string,int);
		
		//get
		int getId();
		string getNome();
		string getCidade();
		string getEstado();
		int getIdade();
		
		//set
		void setId(int);
		void setNome(string);
		void setCidade(string);
		void setEstado(string);
		void setIdade(int);
		
		void imprimir();
		void ler();
};

	Advogado::Advogado(){
		this->id=0;
		this->nome="";
		this->cidade="";
		this->estado="";
		this->idade=0;
	}
	
	Advogado::Advogado(int id,string nome,string cidade,string estado,int idade){
		this->id=id;
		this->nome=nome;
		this->cidade=cidade;
		this->estado=estado;
		this->idade=idade;
	}
	
	void Advogado::imprimir(){
		cout << "\n\nImprimir os dados do Advogado\n";
		cout << "ID:" << id;
		cout << "\nNome:"<<nome;
		cout << "\nCidade:"<<cidade;
		cout << "\nEstado:"<<estado;
		cout << "\nIdade:"<<idade;
	}
	
	void Advogado::ler(){
		cout << "\n\nLer dados do Advogado\n";
		cout << "Informe o ID:";
		cin >> id;fflush(stdin);
		
		cout << "Informe o nome:";
		getline(cin, nome);fflush(stdin);
	
		cout <<"Informe a cidade:";
		getline(cin, cidade);fflush(stdin);
		
		cout <<"Informe o estado";
		getline(cin, estado);fflush(stdin);
		
		cout <<"Informe a idade:";
		cin >> idade;fflush(stdin);
	}
	
	int Advogado::getId(){
		return(this->id);
	}
	
	string Advogado::getNome(){
		return(this->nome);
	}
	
	string Advogado::getCidade(){
		return(this->cidade);
	}
	
	string Advogado::getEstado(){
		return(this->estado);
	}
	
	int Advogado::getIdade(){
		return(this->idade);
	}

	void Advogado::setId(int id){
		this->id=id;
	}
	
	void Advogado::setNome(string nome){
		this->nome=nome;
	}
	
	void Advogado::setCidade(string cidade){
		this->cidade=cidade;
	}
	
	void Advogado::setEstado(string estado){
		this->estado=estado;
	}
	
	void Advogado::setIdade(int idade){
		this->idade=idade;
	}
