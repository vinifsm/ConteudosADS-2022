#include <conio.h>
#include <iostream>
#include "Agricultor.h"
#include "Insumo.h"
using namespace std;

class AreaPlantio{
	protected:
		int id;
		Agricultor produtor;
		Insumo insumo;
		float quantidade;
		float valor;
	public:
		AreaPlantio();
		AreaPlantio(int id, Agricultor produtor, Insumo insumo,float quantidade, float valor);
		
		int getId();
		Agricultor getProdutor();
		Insumo getInsumo();
		float getQuantidade();
		float getValor();
		
		void setId(int id);
		void setProdutor(Agricultor produtor);
		void setInsumo(Insumo insumo);
		void setQuantidade(float quantidade);
		void setValor(float valor);
		
		void imprimir();
		void ler();
};

AreaPlantio::AreaPlantio(){
this->id=0;
this->produtor=Agricultor();
this->insumo=Insumo();
this->quantidade=0.0;
this->valor=0.0;
}
AreaPlantio::AreaPlantio(int id, Agricultor produtor, Insumo insumo,float quantidade, float valor){
this->id=id;
this->produtor=produtor;
this->insumo=insumo;
this->quantidade=quantidade;
this->valor=valor;
}
		
int AreaPlantio::getId(){
return(this->id);
}
Agricultor AreaPlantio::getProdutor(){
return(this->produtor);
}
Insumo AreaPlantio::getInsumo(){
return(this->insumo);
}
float AreaPlantio::getQuantidade(){
return(this->quantidade);
}
float AreaPlantio::getValor(){
return(this->valor);
}
		
void AreaPlantio::setId(int id){
this->id=id;
}
void AreaPlantio::setProdutor(Agricultor produtor){
this->produtor=produtor;
}
void AreaPlantio::setInsumo(Insumo insumo){
this->insumo=insumo;
}
void AreaPlantio::setQuantidade(float quantidade){
this->quantidade=quantidade;
}
void AreaPlantio::setValor(float valor){
this->valor=valor;
}
		
void AreaPlantio::imprimir(){
	cout << "\n\nDados da Área de Plantio";
	cout << "\nID:" << id;
	cout << "\nQuantidade:"<<quantidade;
	cout << "\nValor:"<<valor;
	produtor.imprimir();
	insumo.imprimir();
}
void AreaPlantio::ler(){
	cout << "\n\nLeitura dos dados da Área de Plantio";
	cout << "\nDigite o ID:"; 
	cin >> id;fflush(stdin);
	
	cout << "Digite a Quantidade:";
	cin >> quantidade;fflush(stdin);
	
	cout << "Digite o Valor:";
	cin >> valor;fflush(stdin);
	
	produtor.ler();
	insumo.ler();
}
