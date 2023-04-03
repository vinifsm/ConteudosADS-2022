#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct pessoa{
	char nome[50];
	int idade;
};

void ler(struct pessoa p1[]){
	for(int i=0;i<3;i++){
		cout << "Digite o nome:";
		cin >> p1[i].nome;
		cout << "Digite a idade:";
		cin >> p1[i].idade;
	}	
}

void comparar(struct pessoa p1[],char *nomeVelho,char *nomeNovo,int &idadeVelho, int &idadeNovo){
	strcpy(nomeVelho,p1[0].nome);
	idadeVelho=p1[0].idade;
	strcpy(nomeNovo,p1[0].nome);
	idadeNovo=p1[0].idade;
	for(int i=0;i<3;i++){
		if (p1[i].idade>idadeVelho){
			idadeVelho=p1[i].idade;
			strcpy(nomeVelho,p1[i].nome);
		}
		if (p1[i].idade<idadeNovo){
			idadeNovo=p1[i].idade;
			strcpy(nomeNovo,p1[i].nome);
		}
	}
}

int main (){
	struct pessoa p1[10];
	char nomeVelho[50], nomeNovo[50];
	int idadeVelho, idadeNovo;
	
	ler(p1);
	comparar(p1,nomeVelho,nomeNovo,idadeVelho,idadeNovo);
	
	cout << "Mais velho: " << nomeVelho << "-" << idadeVelho << endl;
	cout << "Mais novo: " << nomeNovo << "-" << idadeNovo;
}
