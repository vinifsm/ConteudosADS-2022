#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

struct produto{
	int codigo;
	string descricao;
	float preco;
	int quantidade_estoque;
};

void mostrar(struct produto p1){
cout << "C�digo: "<< p1.codigo << endl;
cout << "Descri��o: " << p1.descricao << endl;
cout << "Pre�o: " << p1.preco << endl;
cout << "Quantidade em estoque: " << p1.quantidade_estoque << endl;	
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct produto p1[1000];
	
	for(int i=0;i<1000;i++){
	cout << "\nDigite o c�digo:";
	cin >> p1[i].codigo;fflush(stdin);
	cout << "Digite a descri��o:";
	getline(cin,p1[i].descricao);fflush(stdin);
	cout << "Digite o pre�o:";
	cin >> p1[i].preco;fflush(stdin);
	cout << "Digite a quantidade em estoque:";
	cin >> p1[i].quantidade_estoque;fflush(stdin);
	}

	for(int i=0;i<1000;i++){
		if(p1[i].quantidade_estoque<50){
			mostrar(p1[i]);
		}
	}
}
