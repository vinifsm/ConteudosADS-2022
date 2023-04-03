#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	int x=0,y=1;
	cout << "Digite o valor: "; 
	cin >> x;
	for (int i=x;i>0;i--){
		y=y*i;
	}
cout <<"O fatorial é: "<< y;	
}

