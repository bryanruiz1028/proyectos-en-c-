#include<iostream.h>
#include<conio.h>

long n=0, r=1,acu=0, x=0;        // suma los numeros imtegrados


void main ()
{
			clrscr();

     cout<<"ingresa un numero\n ";
     do{
     cin >>n;
      }while(n<10);
       do{
       r=n%10;
       n=n/10;
       acu=acu+r;
       }while(n>0);
       cout<<acu;



     getch();
}