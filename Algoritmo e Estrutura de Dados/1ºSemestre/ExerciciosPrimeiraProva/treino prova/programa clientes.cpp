#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

struct cliente{
	int CPF;
	string nome;
	int idade;
	float salario;
};

void lerDados(struct cliente c1 [1000]){
	for(int i=0;i<3;i++){
	cout << "\nDigite o CPF do cliente:";
	cin >> c1[i].CPF;
	cout << "Digite o nome do cliente:";
	cin >> c1[i].nome;
	cout << "Digite a idade do cliente:";
	cin >> c1[i].idade;
	cout << "Digite o salário do cliente:";
	cin >> c1[i].salario;
	}	
}

void compararDados(struct cliente c1 [1000],string &nomeMaisVelho,string &nomeMaiorSalario,int &idade,float &salario){
	nomeMaisVelho=c1[0].nome;
	nomeMaiorSalario=c1[0].nome;
	idade=c1[0].idade;
	salario=c1[0].salario;
	for(int i=0;i<3;i++){
		if (c1[i].idade>idade){
			idade=c1[i].idade;
			nomeMaisVelho=c1[i].nome;
		}
		if (c1[i].salario>salario){
			salario=c1[i].salario;
			nomeMaiorSalario=c1[i].nome;
		}
	}
}

int main (){
setlocale(LC_ALL,"Portuguese");
struct cliente c1[1000];
string nomeMaisVelho,nomeMaiorSalario;
int idade;
float salario;

lerDados(c1);
compararDados(c1,nomeMaisVelho,nomeMaiorSalario,idade,salario);

cout << "\nNome do Cliente mais velho: " << nomeMaisVelho;
cout << "\nIdade do Cliente mais velho: " << idade;
cout << "\nNome do Cliente com maior salário: " << nomeMaiorSalario;
cout << "\nSalário do Cliente com maior salário: " << salario;
}
