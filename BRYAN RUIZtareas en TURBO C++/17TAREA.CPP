#include<iostream>
#include<conio.h>
using namespace std;
 //SE INGRESA POR TECLADO 1 VALOR , PRESENTA POR PANTALLA 5 NUMEROS
 //PAREAS MENORES AL VALOR INGRESADO
int n=0, y=5, a=0;
int main ()
{
cout<<"ingresa un numero \n ";
cin >>n;
a= n % 2 ;
if(a== 0)
     {n=n-2 ;
}else{
     n=n-1;}
do{
     cout<<n<<"\n " ;
     y=y-1;
     n=n-2;
}while(!y==0);

}