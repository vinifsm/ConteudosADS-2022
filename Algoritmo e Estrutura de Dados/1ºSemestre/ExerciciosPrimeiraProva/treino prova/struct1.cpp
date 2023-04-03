#include <iostream>
#include <conio.h>
using namespace std;

void ler(string &nome){
	nome="45";
}

int main (){
	string nome="Ola Mundo";
	
	ler(nome);
	
	cout << nome;
}
