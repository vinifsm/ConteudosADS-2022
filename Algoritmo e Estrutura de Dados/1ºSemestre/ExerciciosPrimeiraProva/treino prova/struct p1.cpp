#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct computador{
	int codigo;
	char marca[50];
	char fabricante[50];
	char modelo[50];
	float preco_compra;
	float preco_venda;
};

void comparar (struct computador pc[50],char *modeloCompra, char *modeloVenda, float &preco, float &venda){
	strcpy (modeloCompra,pc[0].modelo);
	strcpy (modeloVenda,pc[0].modelo);
	preco=pc[0].preco_compra;
	venda=pc[0].preco_venda;
	for (int i=0;i<3;i++){
		if(pc[i].preco_compra>preco){
			preco=pc[i].preco_compra;
			strcpy (modeloCompra,pc[i].modelo);
		}
		if(pc[i].preco_venda>venda){
			venda=pc[i].preco_venda;
			strcpy (modeloVenda,pc[i].modelo);
		}
	}
}

void imprimir (struct computador pc[50]){
	for(int i=0;i<3;i++){
		cout << "\n\nCodigo:" << pc[i].codigo;
		cout << "\nMarca:" << pc[i].marca;
		cout << "\nFabricante:" << pc[i].fabricante;		
		cout << "\nModelo:" << pc[i].modelo;		
		cout << "\nPreço de Compra:" << pc[i].preco_compra;		
		cout << "\nPreço de Venda:" << pc[i].preco_venda;				
	}
}

void ler(struct computador pc[50]){
	for(int i=0;i<3;i++){
		cout << "\nCodigo:";
		cin >> pc[i].codigo;
		cout << "Marca:";
		cin >> pc[i].marca;
		cout << "Fabricante:";
		cin >> pc[i].fabricante;		
		cout << "Modelo:";
		cin >> pc[i].modelo;		
		cout << "Preço de Compra:";
		cin >> pc[i].preco_compra;		
		cout << "Preço de Venda:";
		cin >> pc[i].preco_venda;				
	}
}

int main (){
	char nomeCompra [30], nomeVenda [30];
	float preco,venda;
	struct computador pc[50];
	ler(pc);
	
	comparar(pc,nomeCompra,nomeVenda,preco,venda);
	cout << "\nO modelo do carro com mais preco de compra: " <<
	 nomeCompra <<
	 "-"<<
	 preco; 
	cout << "\nO modelo do carro com mais preco de venda: " <<
	 nomeVenda <<
	 "-"<<
	 venda;
}
