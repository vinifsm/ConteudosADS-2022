#include <locale.h>
#include "Produtos.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	float x;
	
	Produtos p1;
	p1.ler();
	p1.imprimir();
	
	cout << "\n\nDigite a nova quantidade: ";
	cin >> x; 
	p1.setQuantidade(x);
	cout << "\nA nova quantidade é: "<<p1.getQuantidade();
}

