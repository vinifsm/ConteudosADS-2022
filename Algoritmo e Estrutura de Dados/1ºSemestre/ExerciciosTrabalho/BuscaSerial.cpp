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

void leitura(struct Pessoa p1[]){
	for (int cont=0;cont<3;cont++){
		cout << "\nLeitura dos dados da Pessoa " << i+1;
		cout << "\nC�digo: ";
		cin >> p1[i].cod;fflush(stdin);
		cout << "Nome: ";
		getline(cin,p1[i].nome);fflush(stdin);
		cout << "Endere�o: ";
		getline(cin,p1[i].endereco);fflush(stdin);
		cout << "Cidade: ";
		getline(cin,p1[i].cidade);fflush(stdin);
		cout << "UF: ";
		cin >> p1[i].uf;fflush(stdin);	
	}
}

void buscaSerial(int cod,struct Pessoa p1[]){
	int x=0, i=0;
	while(x==0){
		if (cod==p1[i].cod){
			cout << "\nC�digo encontrado " << char(25);
			cout << "\nC�digo: " << p1[i].cod;
			cout << "|Nome: " << p1[i].nome;
			cout << "|Endere�o: " << p1[i].endereco;
			cout << "|Cidade: " << p1[i].cidade;
			cout << "|UF: " << p1[i].uf;
			x=1;	
		}
		else if(cod<p1[i].cod){
			cout << "\nFalha ao encontrar o c�digo. O programa ser� finalizado";
			x=1;
		}
			i++;
	}
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Pessoa p1[9];
	int cod;
	
	leitura(p1);
	
	cout << "\nDigite o c�digo que ser� procurado: ";
	cin >> cod;
	
	buscaSerial(cod,p1);
}
