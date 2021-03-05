#include<iostream.h>
#include<conio.h>

int a=3 ,b =1,c=0;
// tabla de multiplicar del mumero 3
void main ()
{                clrscr();
     do{
     c=a*b;
     cout<<a<<"*"<<b<<"="<<c <<"\n";
     b=b++;

     }while(b<13);

     getch();
}