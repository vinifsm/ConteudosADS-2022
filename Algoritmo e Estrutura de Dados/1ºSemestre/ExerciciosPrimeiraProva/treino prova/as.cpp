#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

struct clientes {
	int cpf;
	string nome;
	int idade;
	float salario;
};

void ler_clientes (struct clientes clien){
	for (int i=0; i<3; i++){
	cout << "\nINFORME UM CPF:"
	cin >> clien[i].cpf;
	cout << "\nINFORME O NOME DO CLIENTE:" << (i+1);
	cin >> clien[i].nome;
	cout << "\nINFORME A IDADE DO CLIENTE:";
	cin >> clien[i].idade;
	cout << "\nINFORME O SALARIO DO CLIENTE:;
	cin >> clien[i].salario;
	}
}

int main(){
	struct clientes vclient[1000];
	ler_clientes(vclient);
	comparar();
}

void comparar (struct clientes clien,int cpf,string nome,int idade,float salario);
