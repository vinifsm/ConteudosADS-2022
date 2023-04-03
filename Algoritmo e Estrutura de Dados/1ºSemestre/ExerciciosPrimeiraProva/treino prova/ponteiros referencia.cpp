#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float ponteiros(int n1,int n2, int n3,int &maior, int &menor){
	if(n1 < n2 && n1 < n3){
		menor = n1;
	}else if(n2 < n1 && n2 < n3){
		menor = n2;
	}else{
		menor = n3;
	}
	if(n1 > n2 && n1 > n3){
		maior = n1;
	}else if(n2 > n1 && n2 > n3){
		maior = n2;
	}else{
		maior = n3;
	}
	return((float)(n1+n2+n3)/3);
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3,maior,menor;
	float media;
	
	cin >> n1 >> n2 >> n3;
	
	media = ponteiros(n1,n2,n3,maior,menor);
	
	cout << "O maior é: "<<maior<<endl;
	cout << "O menor é: "<<menor<<endl;
	cout << "A média é: "<<media;
}
