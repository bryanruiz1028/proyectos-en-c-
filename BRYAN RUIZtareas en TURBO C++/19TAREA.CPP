#include<iostream.h>
#include<conio.h>
 // GENERAR Y PRESENTAR LA TABLAS DE RESTAR

int a=1, b=1,c, d ;
void main ()
{             clrscr();
      do{
      do{
       c=a-b ;
       cout<<a<<"-"<<b<<"="<<c <<"\n" ;
       b=b+1;
	}while(b<=12);
	a=a+1;
	b=1 ;
	}while(a<=12);

     getch();
}