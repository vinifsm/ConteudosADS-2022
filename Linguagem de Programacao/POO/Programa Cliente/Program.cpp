#include <iostream>
#include <locale.h>
#include "Cliente.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	int x;
	
	Cliente cliente1;
	cliente1.ler();
	cliente1.imprimir();

	cout << "\n\nDigite o novo saldo: ";
	cin >> x;
	cliente1.setSaldo(x);
	
	cout << "Novo saldo do cliente "<<cliente1.getNome()<< " é "<<cliente1.getSaldo();
}

