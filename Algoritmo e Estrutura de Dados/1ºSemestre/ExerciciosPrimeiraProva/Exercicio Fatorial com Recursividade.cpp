#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int fatorial (int x);

int main (){
	setlocale (LC_ALL,"Portuguese");
	int x;
	cout <<"Digite o valor: ";
	cin >> x;
	cout << "O fatorial é: "<<fatorial(x); 
}

fatorial (int x){
	if (x>1){
		return(x*fatorial(x--));
	}
	if (x==1){
		return(1);
	}
	
}
