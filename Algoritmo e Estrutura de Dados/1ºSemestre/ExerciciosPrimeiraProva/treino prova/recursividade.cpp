#include <iostream>
#include <conio.h>
#define K 50
using namespace std;

int func(int x){
	if(x>1){
		return(func(x-1)+func(x-2));
	}
	else{
		return(x);
	}
}

int main (){
	int x;
	
	cout << "Fibonnaci de que número?" << endl;
	cin >> x;
	cout << "\nFibonnaci é: " << func(x);
	
}


