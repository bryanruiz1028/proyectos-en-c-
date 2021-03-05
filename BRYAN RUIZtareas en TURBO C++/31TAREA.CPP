#include<iostream.h>
#include<conio.h>

long a=3, c=3,b=1;        // tabla de multiplicar de 3



void main ()
{
			clrscr();
     do{

     cout<<a<<"*"<<b<<"="<<c<<"\n";
      b=b++;
      c=a*b;
      }while(c<31);

     getch();
}