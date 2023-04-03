#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{
	int diaDev, mesDev, anoDev;
	int dia, mes, ano;
    struct tm *p;
    time_t seconds;

    time(&seconds);
    p = localtime(&seconds);

	dia = p->tm_mday ;
	mes = p->tm_mon + 1;
	ano = p->tm_year + 1900;

	cout << "Digite o ano:";
	cin >> ano;
	cout << "Digite o mes:";
	cin >> mes;
	cout << "Digite o dia:";
	cin >> dia;
	
	if(anoDev <= ano){
		if(mesDev <= mes){
			if(diaDev <= dia){
				cout << "Não atrasado";
			}
			else{
				cout << "Atrasado";
			}
		}
		else{
			cout << "Atrasado";
		}
	}
	else{
		cout << "Atrasado";
	}

    return 0;
}
