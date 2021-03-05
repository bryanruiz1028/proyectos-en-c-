#include<iostream.h>
#include<conio.h>
		    //se ingresa por teclado un valor y presenta los 5
long a, b=5, n=0;     // primeross multiplos de 5  que no terminan en 5

void main ()
{
			clrscr();

     cout<<"ingresa un numero\n ";
     cin >>n;

     a=n;
     n=0;

     while(n<=a)
     {n=n+10;
     }//acaba

     do{
       cout<<n<<"\n";
      n=n+10;
      b=b-1;
      }while(b>=1);

     getch();
}