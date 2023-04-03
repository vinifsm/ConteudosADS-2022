#include <conio.h>
#include <iostream>
#include <locale.h>
#include "Conta.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	int numConta;
	string titular;
	float saldo;
	
	cout<<"Digite o número da conta: ";
	cin>> numConta;
	cout<<"Digite o titular da conta: ";
	cin>> titular;
	cout<<"Digite o saldo da conta: ";
	cin>> saldo;
	
	Conta conta1 (numConta,titular,saldo);
	conta1.imprimir();
	
	getch();
}
