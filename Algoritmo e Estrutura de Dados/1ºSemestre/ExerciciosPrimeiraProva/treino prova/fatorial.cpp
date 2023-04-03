#include <iostream>
#include <conio.h>
using namespace std;

int fatorial (int x){
	if(x>1){
		return(x*fatorial(x-1));	
	}
	else if (x==0||x==1){
		return(1);
	}
}

int main (){
	int x;
	
	cout << "Digite o valor do fatorial:";
	cin >> x;	
	
	cout << "O valor é: " << fatorial(x);
}
