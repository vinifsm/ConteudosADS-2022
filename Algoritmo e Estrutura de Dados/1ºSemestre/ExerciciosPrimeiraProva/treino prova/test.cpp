#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int funcMaior(int x[],int cont){
	int maior = x[0];
	for(int i=0;i<cont;i++){
		if (x[i] > maior){
			maior=x[i];
		}
	}
	return(maior);
}

int funcMenor(int x[],int cont){
	int menor=x[0];
	for(int i=0;i<cont;i++){
		if (x[i] < menor){
			menor=x[i];
		}
	}
	return(menor);
}


int main (){
	int x[10],cont=10,soma=0;
	
	for (int i=0;i<10;i++){
		cout << "Digite o número:";
		cin >> x[i];
		soma+=x[i];
	if(x[i]==x[i-1]+1){
		cont=i+1;
		i=10;
	}
	}

	cout << "O menor é: " << funcMenor(x,cont) << endl;
	cout << "O maior é: " << funcMaior(x,cont) << endl;
	cout << "A soma é: " << soma << endl;
	cout << "A média é: " << (float) soma/cont;	
}
