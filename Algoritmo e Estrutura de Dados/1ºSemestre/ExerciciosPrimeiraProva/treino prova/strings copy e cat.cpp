#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main ( )
{
char s1[20]= "Feliz ";
char s2 [ ] = "Ano Novo";
char s3 [40] = " ";
cout << "s1= " << s1 << "\n s2 = " << s2;
cout << "\n strcat (s1, s2) = " << strcat (s1, s2);
cout << "\n strncat (s3, s1, 5) = " << strncat (s3, s1, 5);
cout << "\n strcat (s3, s1,) = " << strcat(s3, s1) << endl;
getch();}

