#include <conio.h>
#include <iostream>
#include <locale.h>
using namespace std;

struct IndexCod{
	int cod;
	int end;
};

struct Pessoa {
	int cod;
	string nome;
	string endereco;
	string cidade;
	string uf;
};

void leitura(struct Pessoa p1[], struct IndexCod i1[]){
	int cod;
	for (int i=0;i<3;i++){
		i1[i].end=i;
		cout << "\nLeitura dos dados da Pessoa " << i+1;
		cout << "\nCódigo: ";
		cin >> cod;fflush(stdin);
		p1[i].cod=cod;
		i1[i].cod=cod;
		cout << "Nome: ";
		getline(cin,p1[i].nome);fflush(stdin);
		cout << "Endereço: ";
		getline(cin,p1[i].endereco);fflush(stdin);
		cout << "Cidade: ";
		getline(cin,p1[i].cidade);fflush(stdin);
		cout << "UF: ";
		cin >> p1[i].uf;fflush(stdin);	
	}
}

void buscaSerial(int cod,struct Pessoa p1[],struct IndexCod i1[]){
	int x=0, i=0, z;
	while(x==0){
		if (cod==i1[i].cod){
			z=i1[i].end;
			cout << "\nCódigo encontrado " << char(25);
			cout << "\nCódigo: " << p1[z].cod;
			cout << "|Nome: " << p1[z].nome;
			cout << "|Endereço: " << p1[z].endereco;
			cout << "|Cidade: " << p1[z].cidade;
			cout << "|UF: " << p1[z].uf;
			x=1;	
		}
		else if(cod<i1[i].cod){
			cout << "\nFalha ao encontrar o código. O programa será finalizado";
			x=1;
		}
			i++;
	}
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Pessoa p1[9];
	struct IndexCod i1[9];
	int cod;
	
	leitura(p1,i1);
	
	cout << "\nDigite o código que será procurado: ";
	cin >> cod;
	
	buscaSerial(cod,p1,i1);
}
