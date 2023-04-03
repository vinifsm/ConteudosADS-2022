#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int soma(int a, int b, int c);

int main (){
setlocale(LC_ALL,"Portuguese");
int x,y,z,somavalores;

cin>>x;
cin>>y;
cin>>z;

somavalores=soma(x,y,z);

cout << "\nA soma é: " << somavalores;
	
}

soma(int a, int b, int c){
	return(a+b+c);
}



