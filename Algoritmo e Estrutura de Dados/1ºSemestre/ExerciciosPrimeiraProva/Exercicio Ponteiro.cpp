#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

void func1(int &n1, int &n2, float &n3){
	float menor = n1;
	float maior = n1;
	float media;
	
		if(n2 < n1 && n2 < n3){
			menor = n2;
		}
		else if(n3 < n1 && n3 < n2){
			menor = n3;
		}
		
		if(n2 > n1 && n2 > n3){
			maior = n2;
		}
		else if (n3 > n1 && n3 > n2){
			maior = n3;
		}
		
		media = (n1+n2+n3)/3;
	
	n1 = menor;
	n2 = maior;
	n3 = media;
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	int x,y;
	float z;
	
	cout << "Digite o primeiro número: ";
	cin >> x;
	cout << "Digite o segundo número: ";
	cin >> y;
	cout << "Digite o terceiro número: ";
	cin >> z;
	
	func1(x,y,z);
	
	cout << "O menor valor é: " << x << endl;
	cout << "O maior valor é: " << y << endl;
	cout << "A média dos valores é: " << z;
}
