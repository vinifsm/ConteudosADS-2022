#include <iostream>
#include <conio.h>
using namespace std;

int funcMenor(int,int);

int main (){
	int x1, x2;
	cout << "Digite o n�mero 1:";
	cin >> x1;
	cout << "Digite o n�mero 2:";
	cin >> x2;
	
	cout << "O menor valor �: " << funcMenor(x1,x2);
}

int funcMenor(int n1, int n2){
	if(n1<n2){
		return(n1);
	}
	else{
		return(n2);
	}
}
