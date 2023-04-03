#include <iostream>
#include <conio.h>
using namespace std;

void func1(int n1,int n2,int *soma,float *media){
	*soma=n1+n2;
	*media=*soma/2;
}

int main (){
	int soma;
	float media;
	
	func1(50,60,&soma,&media);
	
	cout << soma << endl;
	cout << media;
}
