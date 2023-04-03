#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int x, fatorial;
	
	cout << "Digite o valor do fatorial:";
	cin >> x;
	
	fatorial=x;
	for(x;x>1;x--){
		fatorial=fatorial*(x-1);
	}	
	
	cout << "O valor é: " << fatorial;
}
