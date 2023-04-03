#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

string Nname (char n1 []){
	
	char n3[30];
	strcpy (n3,n1);
	return (n3);
}


int main(){
	char n2[30];
	cin >> n2;
	cout << Nname(n2);	
}
