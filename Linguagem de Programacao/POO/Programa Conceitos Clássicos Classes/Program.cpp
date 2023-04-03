#include <iostream>
#include <conio.h>
#include <locale.h>
#include "aluno.h"
using namespace std;


int main(){
	setlocale(LC_ALL,"Portuguese");
	Aluno aluno1; //instanciacao da classe aluno
	aluno1.ler(); //chamada de metodo da classe
	aluno1.imprimir();
	aluno1.situacao();
}

