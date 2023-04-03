#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main ( )
{
char *s1 = "Feliz Ano Novo";
char *s2 = "Feliz Ano Novo";
char *s3 = "Feliz Natal";
char *s4 = "Feliz Pascoa";
cout << "strcmp(s1, s2) = " << strcmp (s1, s2);
cout << "\n strcmp (s1, s3) = " << strcmp (s1, s3);
cout << "\n strcmp (s3, s1) = " << strcmp (s3, s1);
cout << "\n strncmp (s1, s3, 6 ) = " << strncmp (s1,s3, 6);
cout << "\n strncmp (s1, s3, 7 ) = " << strncmp (s1,s3, 7);
cout << "\n strncmp (s3, s1, 7) = "<< strncmp (s3, s1, 7);
cout << "\n strncmp (s1, s4, 7) = "<< strncmp (s1, s4, 7);
cout << "\n strncmp (s4, s1, 7) = "<< strncmp (s4, s1, 7);
getch();
}
