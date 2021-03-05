#include<iostream>
#include<conio.h>
using namespace std;
int p=1; //p x p 5 NUMEROS IMPARES MENORES A 11 Y MAYORES A 0
int main ()
{
do{
    cout<<p<<",";
    p=p+2;
}while(p<10);
getch();
}