#include <iostream>
#include <conio.h>
#include <locale.h>
#include "Vinho.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	Fabricante f1 (3,"Vercelli");
	Pais p1 (4,"Brasil","Português");
	Vinho v1 (2,f1,"Volia",30.0,7,"Roxinha","Roxa",p1);
	Uva u1 (6,"Pederneiras","Verde",p1);
	
	cout << v1.getValor();
	cout << v1.getUvaNome();
	v1.alteraValor(20);
	cout << endl << v1.getValor();
	cout << endl << u1.getPaisOrigem().getLingua();
	}
