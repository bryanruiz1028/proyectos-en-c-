#include<iostream>
#include<conio.h>
using namespace std;
long n=0;//TODOS LOS NUMEROS PARES MENORES AL NUMERO INGRESADO
int  main ()
{
cout<<"ingresa el primer numero \n ";
cin >>n;
if(n%2==0){
    do{
    n=n-2;
    cout<<n<<",";
    }while(n>2);
}else{n=n-1;
    do{
    cout<<n<<",";
    n=n-2;
    }while(n>1);}
    getch();
}