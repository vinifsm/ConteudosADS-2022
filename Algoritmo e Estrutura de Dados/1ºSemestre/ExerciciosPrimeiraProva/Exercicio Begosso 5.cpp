#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int MenorValor (int v[]);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[10];
	for (int i=0;i<10;i++){
		cout << "Digite o valor "<<i+1<<": ";
		cin >> vet[i];
	}
	cout<<"\nO menor valor é: "<<MenorValor(vet);
	getch();
}

MenorValor (int v[]){
	int menor;
	menor=v[0];
	for	(int i=0;i<10;i++){
		if(v[i]<menor){
			menor=v[i];
		}
	}
	return(menor);
}
