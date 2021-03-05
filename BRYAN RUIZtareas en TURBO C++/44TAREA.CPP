#include<iostream>
#include<conio.h>
using namespace std;
int n=1,c;           //p x p todos los numeros  menores impares al
// valor ingresado y mayor a 0
int main ()
{
cout<<"ingrese un numero\n" ;
cin>>n;
c=n-1;
n=-1;
    do{
      n=n+2;
      cout<<n<<".";}
    while(n<c);
getch();
}