#include <iostream>
#include <conio.h>
using namespace std;

void func1(int &soma,float &media){
	int x = soma+media;
	int y = x/2;
	
	soma = x;
	media = y;
}

int main (){
	int soma;
	float media;
	
	cin >> soma;
	cin >> media;
	
	func1(soma,media);
	
	cout << soma << endl;
	cout << media;
}
