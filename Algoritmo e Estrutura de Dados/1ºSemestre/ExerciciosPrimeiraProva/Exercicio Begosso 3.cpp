#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

//Exercicio 3 Begosso

int CalculoMenor(int vet[],int x){//Calculo do menor numero do vetor
	int menor=vet[0];
	for(int i=0;i<x;i++){
		if(vet[i]<menor){
			menor=vet[i];
		}
	}
return(menor);
}

int CalculoMaior(int vet[],int x){//Calculo do maior numero do vetor
	int maior=vet[0];
	for(int i=0;i<x;i++){
		if(vet[i]>maior){
			maior=vet[i];
		}
	}
return(maior);	
}
 
int main (){
setlocale(LC_ALL,"Portuguese");

int v[10], menor,maior,soma=0, x=0;
float cons=0.1;

for(int i=0;i<10;i++){//Leitura dos numeros do vetor
	x=i+1;
	cout <<"Digite o número "<<i+1<<": ";
	cin >> v[i];
	soma+=v[i];
	if(v[i]==cons+1){//Regra para numero consecutivo
		cout<<"Valor consecutivo digitado, a leitura será finalizada.\n";
		i=10;
	}
	cons=v[i];
}

menor=CalculoMenor(v,x);
maior=CalculoMaior(v,x);
	
cout<<"\nO menor valor é: "<<menor;
cout<<"\nO maior valor é: "<<maior;
cout<<"\nA soma dos valores é: "<<soma;
cout<<"\nA média dos valores é: "<<(float)soma/x;
}




