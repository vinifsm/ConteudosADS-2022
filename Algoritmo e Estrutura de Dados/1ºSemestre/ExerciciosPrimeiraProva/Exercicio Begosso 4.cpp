#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int MenorValor(int x1,int x2);

int main (){
	int n1,n2;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite o primeiro n�mero:";
	cin>>n1;
	cout<<"Digite o segundo n�mero:";
	cin>>n2;
	cout<<"O menor valor �: "<<MenorValor(n1,n2);
}

MenorValor (int x1,int x2){
	int menor = x1;
	if(x1>x2){
		menor = x2;
		return (menor);
	}
}
