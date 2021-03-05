#include<iostream.h>
#include<conio.h>
long a=1, c=0,b=1;
 // tabla de multiplicar
void main ()
{
			clrscr();
do{
     do{
       c=a*b;
     cout<<a<<"*"<<b<<"="<<c<<"";
      b=b+1;
      }while(b<13);
      a=a+1;
      b=1;
}while(a<13) ;


     getch()