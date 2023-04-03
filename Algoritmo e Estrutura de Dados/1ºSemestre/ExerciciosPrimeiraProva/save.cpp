#include <string.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

string nome (char n1 []){
	
	char n2[50];
	strcpy (n2,n1);
	return n2;
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	char n2[50];
	cout << "Digite um nome bonito: ";
	cin >> n2;
	cout << "O nome é: " << nome(n2);
}

