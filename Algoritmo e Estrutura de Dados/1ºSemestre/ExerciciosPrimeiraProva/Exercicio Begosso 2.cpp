#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int v[10], x=0, maior=0, menor=0, soma=0;
float cons = 0.1;

void leitura (){
	for (int i=0; i<10 ;i++){
		x=i+1;
		cout << "Digite o n�mero " << i+1 << ": ";
		cin >> v[i];
		if (v[i]==cons+1){
		cout << "Valor consecutivo digitado, a leitura ser� finalizada.\n";
		i=10;
	    }
	    cons = v[i];
	}
}

void calcular (){
	menor=v[0];
	maior=v[0];
	for (int i=0;i<x;i++){
		if(v[i]>maior){
			maior=v[i];
		}
		if(v[i] < menor){
			menor = v[i];
		}
		soma+=v[i];	
	}
}

int main (){
	setlocale (LC_ALL,"Portuguese");
	leitura ();
	calcular ();
	cout << "\nO maior valor digitado �: " << maior;
	cout << "\nO menor valor digitado �: " << menor;
	cout << "\nA soma dos valores digitados �: " << soma;
	cout << "\nA m�dia dos valores digitados �: "<< (float)soma/x;
}


