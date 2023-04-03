#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float func1 (int n1, int &n2){
	n2 = n1 + n2;
	return((float)n2/2);
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	int x, y;
	
	cout << "Digite o número 1: ";
	cin >> x;
	cout << "Digite o número 2: ";
	cin >> y;
	cout << endl << "Média: " << func1(x,y) << endl;
	cout << "Soma: " << y;
}
