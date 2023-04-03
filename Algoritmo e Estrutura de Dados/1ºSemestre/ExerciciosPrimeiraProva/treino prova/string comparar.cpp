#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int verifica (char nome1[],char nome2[]){
	
	return strcmp(nome1,nome2);
	
}

int main (){
	char nome1 [50], nome2[50];
	int x;
	
	cin >> nome1;
	cin >> nome2;
	
	x = verifica (nome1,nome2);
	
	if(x>0){
		cout << "\nPrimeiro nome é maior.";
	}
	else if(x<0){
		cout << "\nSegundo nome é maior.";
	}
	else{
		cout << "\nNomes iguais";
	}
	
	cout << endl << nome1 << endl;
	
	for(int i=0;nome1[i]!='\0';i++){
		cout << nome1[i];
	}
}
