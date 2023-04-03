#include <iostream>
#include <conio.h>
#include <locale.h>
#include "TipoProcesso.h"
#include "Processo.h"
#include "Vara.h"
#include "Advogado.h"
#include "Data.h"
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	TipoProcesso tipoprocesso1;
	Processo processo1;
	Vara vara1;
	Advogado advogado1(10,"João","Assis","São Paulo",22);
	Data data1(29,11,2002);

	cout << "\nO ID do tipo de processo 1 é: " << tipoprocesso1.getId();
	
	string descricao;
	cout << "\n\nDigite a nova descrição do processo 1: ";
	getline(cin, descricao);
	processo1.setDescricao(descricao);
	processo1.getDescricao();
	
	vara1.ler();
	
	advogado1.imprimir();
	
	data1.imprimir();
}
