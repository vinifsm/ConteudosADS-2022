#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

void pont(int &n1,int &n2,float &n3){
	float menor = n1;
	float maior = n1;
	float media;
	
	if (n2 < n1 && n2 < n3){
		menor = n2;
	}
	else if (n3 < n2 && n3 < n1){
		menor = n3;
	}
	if (n2 > n1 && n2 > n3){
		maior = n2;
	}
	else if (n3 > n2 && n3 > n1){
		maior = n3;
	}
	media = (n1+n2+n3)/3;
	
	n1 = menor;
	n2 = maior;
	n3 = media;
}

int main(){
	setlocale (LC_ALL,"Portuguese");
	int a,b;
	float c;
	
	cout << "Digite o primeiro n�mero:" << endl;
	cin >> a;
	cout << "Digite o segundo n�mero" << endl;
	cin >> b;
	cout << "Digite o terceiro n�mero" << endl;
	cin >> c;
	
	pont(a,b,c);
	
	cout << "O menor valor �:" << a << endl;
	cout << "O maior valor �:" << b << endl;
	cout << "A m�dia �:" << c << endl;
}
