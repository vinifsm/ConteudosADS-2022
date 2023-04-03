#include <iostream>
#include <conio.h>
#include <string.h>
#include <locale.h>
using namespace std;

int funcNome (char s1 [],char s2[]){
	
	int s3;
	
	s3 = strcmp (s1,s2);
	
	return (s3);
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	char n1 [50], n2 [50];
	
	cout << "Digite o primeiro texto: ";
	cin >> n1;
	
	cout << "Digite o segundo texto: ";
	cin >> n2;
	
	if (funcNome(n1,n2) < 0){
	 	cout << "O segundo nome é maior."; 	
	}
	else if (funcNome(n1,n2) > 0){
		cout << "O primeiro nome é maior.";
	}
	else cout << "Os nomes são iguais";
}
