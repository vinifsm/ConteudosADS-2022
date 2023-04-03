#include <iostream>
#include <conio.h>
#include <locale.h>
#define t 9
using namespace std;

struct Pessoa {
	int cod;
	string nome;
	string endereco;
	string cidade;
	string uf;
};

void buscaBinaria(int i, int f, struct Pessoa p1 []){
	int x=0, y, meio=(i+f)/2;
	
	cout << "\nQue valor deseja encontrar?\n";
	cin >> y;
	
	while(x==0){
		if(i<f){
			if(p1[meio].cod==y){
				cout << "Valor " << y << " encontrado na posição " << meio;
				x=1;
			}
			else{
				if(p1[meio].cod>y){
					f=meio-1;
				}
				else{
					i=meio+1;
				}
				meio=(i+f)/2;
			}
		}
		else{
			cout << "Valor não encontrado";
			x=1;
		}		
	}
	
}

void leitura(struct Pessoa p1[]){
	for (int i=0;i<t;i++){
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

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Pessoa p1[t];
	int i=0, f=t;
	
	leitura(p1);
	buscaBinaria(i,f,p1);
		
}
