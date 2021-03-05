#include<iostream>
#include<conio.h>
using namespace std;

int a=3 ,b =1,n=0;
// tabla suma del numero que se ingrese
// SE REPITE CON EL EJERCICIO 12
int main()
{
cout<<"ingresa un numero para hacer la tabla de suma\n ";
cin>>n;
do{a=n+b;
     cout<<n<<"+"<<b<<"="<<a <<"\n";
     b=b+|1;
}while(b<13);
}