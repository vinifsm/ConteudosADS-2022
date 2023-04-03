#include <conio.h>
#include <iostream>
#include <locale.h>
#include "Account.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	Account acc1("John");
	
	acc1.depositaGrana(100);
	acc1.informaSaldo();
}
