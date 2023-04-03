#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

struct Pessoa {
	int cod;
	string nome;
	string endereco;
	string cidade;
	string uf;
};

void leitura(struct Pessoa p1[], int &contador){
	int i=0;
	for (int saida=1;saida!=0;i++){
		cout << "\nLeitura dos dados da Pessoa " << i+1;
		cout << "\nCódigo: ";
		cin >> p1[i].cod;fflush(stdin);
		if(p1[i].cod>0){
			cout << "Nome: ";
			getline(cin,p1[i].nome);fflush(stdin);
			cout << "Endereço: ";
			getline(cin,p1[i].endereco);fflush(stdin);
			cout << "Cidade: ";
			getline(cin,p1[i].cidade);fflush(stdin);
			cout << "UF: ";
			cin >> p1[i].uf;fflush(stdin);	
		}
		else{
			saida=0;
		}	
	}
	contador = i-1;
}

void exclusao(struct Pessoa p1[], struct Pessoa p3[]){
	int vet[3]={3,5,6};
	int y=0, i=0;
	
	for(int z=0;z<9;z++){
		if(vet[i]==p1[z].cod && i<3){
			i++;	
		}
		else if(vet[i]<p1[z].cod && i<3){		
			p3[y].cod=p1[z].cod;
			p3[y].nome=p1[z].nome;
			p3[y].endereco=p1[z].endereco;
			p3[y].cidade=p1[z].cidade;
			p3[y].uf=p1[z].uf;
			i++;
			y++;	
		}
		else{
			p3[y].cod=p1[z].cod;
			p3[y].nome=p1[z].nome;
			p3[y].endereco=p1[z].endereco;
			p3[y].cidade=p1[z].cidade;
			p3[y].uf=p1[z].uf;	
			y++;
		}
	}
}

void mostrar (struct Pessoa p1[]){
		for (int i=0;i<6;i++){
		cout << "\n\nDados da pessoa " << i+1;
		cout << "\nCódigo: " << p1[i].cod;
		cout << "\nNome: " << p1[i].nome;
		cout << "\nEndereço: " << p1[i].endereco;
		cout << "\nCidade: " << p1[i].cidade;
		cout << "\nUF: " << p1[i].uf;
	}
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Pessoa p1[9];
	struct Pessoa p3[9];
	int cont1, cont3;
	
	leitura(p1);
	
	exclusao(p1,p3);
	
	mostrar(p3);
}
