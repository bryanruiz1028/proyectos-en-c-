#include<iostream>
#include<conio.h>
 //SE INGRESA POR TECLADO 1 VALOR , PRESENTA POR PANTALLA todos los NUMEROS
 //PARES MENORES AL VALOR INGRESADO
using namespace std;
int n=0, y=5, a=0;
int main ()
{
cout<<"ingresa un numero \n ";
cin >>n;
a= n % 2 ;
if(a== 0)
     {n=n-2 ;
     }else
     {n=n-1;}
     do{
     cout<<n<<", " ;
     n=n-2;
     }while(!n==0);
getch();
}