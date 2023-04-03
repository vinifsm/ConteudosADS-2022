#include <iostream>
#include <conio.h>
#include <locale.h>
#include "Produto.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	Fornecedor f1(4,"Fido Castro","Avenida Paulista - 230 - São Paulo - SP","(11)08005679");
	Produto p1(6,"Comics da turma da monica",3.0,f1);
	
	p1.alteraValor(10);
	p1.print();
}
