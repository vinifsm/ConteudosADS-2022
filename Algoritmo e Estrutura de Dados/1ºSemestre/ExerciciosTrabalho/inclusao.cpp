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
	for (int i=0;i<3;i++){
		cout << "\nLeitura dos dados da Pessoa " << i+1;
		cout << "\nCódigo: ";
		cin >> p1[i].cod;fflush(stdin);
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

void inclusao(struct Pessoa p1[], struct Pessoa p3[]){
	struct Pessoa p2[9];
	for (int i=0;i<3;i++){
		cout << "\nLeitura dos dados que  da Pessoa " << i+1;
		cout << "\nCódigo: ";
		cin >> p2[i].cod;fflush(stdin);
		cout << "Nome: ";
		getline(cin,p2[i].nome);fflush(stdin);
		cout << "Endereço: ";
		getline(cin,p2[i].endereco);fflush(stdin);
		cout << "Cidade: ";
		getline(cin,p2[i].cidade);fflush(stdin);
		cout << "UF: ";
		cin >> p2[i].uf;fflush(stdin);	
	}
	int x=0, y=0, z=0, cont=0;
	
	while(cont==0){
				if(p1[x].cod<p2[y].cod && x<3){
					p3[z].cod=p1[x].cod;
					p3[z].nome=p1[x].nome;
					p3[z].endereco=p1[x].endereco;
					p3[z].cidade=p1[x].cidade;
					p3[z].uf=p1[x].uf;
					x++;
					z++;
				}
				else if(p1[x].cod>p2[y].cod && x<3){
					p3[z].cod=p2[y].cod;
					p3[z].nome=p2[y].nome;
					p3[z].endereco=p2[y].endereco;
					p3[z].cidade=p2[y].cidade;
					p3[z].uf=p2[y].uf;
					y++;
					z++;
				}
				else{
					cont=1;
				}
	}
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Pessoa p1[9];
	struct Pessoa p3[9];
	int cod;
	
	leitura(p1);
	
	inclusao(p1,p3);
	
	for (int i=0;i<5;i++){
		cout << "\n\nDados da pessoa " << i+1;
		cout << "\nCódigo: " << p3[i].cod;
		cout << "\nNome: " << p3[i].nome;
		cout << "\nEndereço: " << p3[i].endereco;
		cout << "\nCidade: " << p3[i].cidade;
		cout << "\nUF: " << p3[i].uf;
	}
}
