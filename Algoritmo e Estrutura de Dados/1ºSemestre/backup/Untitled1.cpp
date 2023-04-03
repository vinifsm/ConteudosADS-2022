#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Dados{
	int cod;
	char nome[40];
	char endereco[40];
	char cidade[40];	
	char uf[2];
};

struct Index{
	int cod;
	int end;
};

void leituraDados (struct Dados d1[], int contd1, struct Index i1[], int conti1){
    int i = 0,m; 
    for (int saida = 1; i < 20 && saida != 0; i++){
        cout << "Codigo:;
        cin >> d1[i].cod;
        if (d1[i].cod > 0){
        	cout << "Nome: ";
   	    	cin >> d1[i].nome;
        	cout << "Endereco: ";
        	cin >> d1[i].endereco;
        	cout << "Cidade: ";
        	cin >> d1[i].cidade;
        	cout << "UF: ";
        	cin >> d1[i].uf;
        	i1[i].cod=d1[i].cod;
        	i1[i].end=i;
        }
        else saida = 0;
    }
    contd1 = i-1;
    conti1 = i-1;
}

void inclusaoDados (struct Dados d1[], int contd1, struct Index i1[], int conti1, int num){
	int j = contd1 + 1, k = conti1, x = 0;
        cout << "Codigo:;
        cin >> d1[j].cod;
        cout << "Nome: ";
   	    cin >> d1[j].nome;
        cout << "Endereco: ";
        cin >> d1[j].endereco;
        cout << "Cidade: ";
        cin >> d1[j].cidade;
        cout << "UF: ";
        cin >> d1[j].uf;
	for (; x == 0; k--){
		if( i1[k] > num){
			i1[k+1].cod=i1[k].cod;
			i1[k+1].end=i1[k].end;
		}
		else{
			i1[k].cod = d1[j].cod;
			i1[k].end = j;
		}
	}
}

void mostrar (struct Dados d1[], int contd1, struct Index i1[], int conti1){
    for (int i = 0; i < contd1; i++){
	
    }

    getch();
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Dados d1[20];
	struct Index i1[20];
}
