#include <iostream>
#include <conio.h>
#include <locale.h>
#include "Address.h"
using namespace std;

const void comparaAddress(Address a1, Address a2){
	int maior=a1.getCep();
	if (a2.getCep()>maior){
		cout << "O maior endereço é" << endl;
		a2.print();
	}
	else {
		cout << "O maior endereço é" << endl;
		a1.print();
	}
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	Address a1 ("Rua Almeida Santos",456,"Assis","SP",19850000);
	Address a2 ("Rua Carlos Vinicius",69,"Tarumã","SP",19861000);
	
	comparaAddress(a1,a2);
}
