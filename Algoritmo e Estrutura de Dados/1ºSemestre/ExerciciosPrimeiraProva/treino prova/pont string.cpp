#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void imprima(char *sptr){
	for (;*sptr!='\0';*sptr++){
		if(*sptr>='a' && *sptr<='z'){
			*sptr=toupper(*sptr);
		}
	}
}

int main (){
	char vetstring [] = "Ola mundo";
	char vstring[10];
	char vstring1[20];
	
	strcpy(vstring,vetstring);
	
	imprima(vetstring);
	
	strncpy(vstring1,vetstring,5);
	vstring1[5]='\0';
	
	cout << vetstring << endl;
	cout << vstring << endl;
	cout << vstring1;
}
