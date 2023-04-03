#include <iostream>
#include <conio.h>
using namespace std;

struct equip{
	int codigo;
	char marca[20];
	char fabric[20];
	char modelo[10];
	float preco_comp, preco_vend;
};

void leitura (struct equip x[50]){
	for(int i=0;i<2;i++){
		cout << "\n\nCodigo: ";
		cin >> x[i].codigo;
		cout << "Marca: ";
		cin >> x[i].marca;
		cout << "Fabricante: ";
		cin >> x[i].fabric;
		cout << "Modelo: ";
		cin >> x[i].modelo;
		cout << "Preço de Compra: ";
		cin >> x[i].preco_comp;
		cout << "Preço de Venda: ";
		cin >> x[i].preco_vend;
	}
}

void mostrar (struct equip x[50]){
	for(int i=0;i<2;i++){
		cout << "\n\nComputador " << i+1;
		cout << "\nCodigo: " <<x[i].codigo;
		cout << "\nMarca: " << x[i].marca;
		cout << "\nFabricante: " << x[i].fabric;
		cout << "\nModelo: " << x[i].modelo;
		cout << "\nPreco de Compra: " << x[i].preco_comp;
		cout << "\nPreco de Venda: " << x[i].preco_vend;
	}
}

int main (){
	struct equip computadores[50];
	leitura(computadores);
	mostrar(computadores);
}
