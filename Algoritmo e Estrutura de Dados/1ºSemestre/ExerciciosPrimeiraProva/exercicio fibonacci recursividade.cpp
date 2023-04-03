#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float fibonacci (float x){	
	if (x==0||x==1){
		return(x);
	}
	else{
		return(fibonacci(x-1)+fibonacci(x-2));	
	}
}

int main (){
	setlocale (LC_ALL,"Portuguese");
	int x;
	cout <<"Digite o valor: ";
	cin >> x;
	
	cout << "O fibonacci é: "<<fibonacci(x); 
}


