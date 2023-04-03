#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void funcstring (char *vet, char *vet2){
	
	strcpy(vet2,vet);
	
}

int main (){
	char vet [50], vet2[50];
	
	cin >> vet;
	
	funcstring(vet,vet2);
	cout << vet2;
}
