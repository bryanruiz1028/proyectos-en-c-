#include<iostream.h>
#include<conio.h>

long n=0, a=1,b=0;        // tabla de restar con el numer
				  //ingresado por teclado


void main ()
{
			clrscr();

     cout<<"ingresa un numero\n ";
     do{
     cin >>n;
      }while(n<1);
      a=n;
      do{
      b=a-n;
      cout<<a<<"-"<<n<<"="<<b<<"\n";
      a= a++  ;
       }while(b<13);



     getch();
}