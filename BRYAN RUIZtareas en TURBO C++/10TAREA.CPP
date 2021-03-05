#include<iostream.h>
#include<conio.h>

int a=3 ,b =1,c=0;
// tabla de multiplicar tal y como esta en la documento que envio
//solo dice que se se haga asta el munero 3
void main ()
{                clrscr();
     do{
     c=a*b;
     cout<<a<<"*"<<b<<"="<<c <<"\n";
     b=b++;

     }while(b<4);

     getch();
}