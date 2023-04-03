#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void ponteiros (char *str,char *str1){
	strncpy(str,str1,9);
	str[9]='n';
	
}

int main (){
char str[50]="Ola Mundo";
char str1[50]="Hello World";

ponteiros(str,str1);	

cout << str;	
}
