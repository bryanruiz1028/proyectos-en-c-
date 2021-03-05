#include<iostream.h>
#include<conio.h>

long a, b=1,c, n=0;

void main ()
{
			clrscr();

     cout<<"ingresa un numero\n ";
     do{
     cin >>n;
      }while(n<1);
      do{ c=a+b;
       a=b;
       b=c;
       cout<<c;

       }while((a+b)<n);

     getch();
}