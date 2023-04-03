#include <iostream>
#include <conio.h>
using namespace std;

class Aluno{
	public://atributos
		int ra;
		string nome;
		string disciplina;
		float nota;
	public://metodos
		void ler() {//metodo ler
		cout << "\nLer Dados de Alunos";
		cout << "\nInforme o RA: ";
		cin >> ra;
		cout << "\nInforme o Nome: ";
		cin >> nome;
		fflush(stdin);//limpar o buffer da tecla
		cout << "\nInforme a Disciplina: ";
		cin >> disciplina;
		fflush(stdin);
		cout << "\nInforme a Nota: ";
		cin >> nota;
		}
		void imprimir() {//metodo imprimir
		cout << "\n\nDados\n";
		cout <<"RA: "<< ra << "\n"
			<<"Nome: "<< nome << "\n"
			<<"Disciplina: "<<disciplina << "\n" 
			<<"Nota: "<< nota << "\n";
		}
		void situacao() {//metodo situacao
			cout << "\nSituação do Aluno " << nome << ": ";
		if(nota>=7){
			cout << "Aprovado";
		}
		else if(nota<7&&nota>=4){
			cout << "Exame";	
		}
		else{
			cout << "Reprovado";
		}
		}
 };
 
