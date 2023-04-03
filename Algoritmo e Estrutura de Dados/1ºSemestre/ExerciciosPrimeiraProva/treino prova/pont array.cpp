#include <iostream>
#include <conio.h>
using namespace std;

void somavetor ( int*, int);

int main (){
	const int arraysize = 5;
	int vetor [arraysize] = { 93, 88, 94, 91, 82};
	int *ptr;
	ptr = vetor;

	somavetor (vetor, arraysize);

	for ( int i = 0; i < arraysize; i++){
		cout << "Elemento " << i << " = " << *ptr++; // ou *(vetor+i)
		cout << endl;
	}
}

void somavetor ( int *ptrvetor, int MAX){
	int constant = 10;

	for (int i = 0; i < MAX; i++){
		*ptrvetor = *ptrvetor + constant;
		ptrvetor++;
	}
}
