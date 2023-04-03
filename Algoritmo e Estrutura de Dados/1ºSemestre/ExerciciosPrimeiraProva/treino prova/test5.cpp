#include <iostream>
#include <conio.h>
using namespace std;

int funcMenor(int[]);

int main (){
	int vet[10];
	
	for(int i=0;i<10;i++){
		cout << "Digite o valor:";
		cin >> vet[i];
	}
	
	cout << "O menor valor é: " << funcMenor(vet);
}

int funcMenor(int vet[]){
	int menor=vet[0];
	for(int i=0;i<10;i++){
		if (vet[i]<menor){
			menor=vet[i];
		}
	}
	return(menor);
}
