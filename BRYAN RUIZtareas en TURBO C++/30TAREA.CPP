#include<iostream.h>
#include<conio.h>

long n=0;


void main ()
{
			clrscr();

     cout<<"ingresa un numero mayor a 100\n ";
     do{
     cin >>n;
      }while(n<100);
   do{
     n=n++;
     }while(n%4!=0);

      do{
      cout<<n<<"\n";

      n= n-4  ;
       }while(n<3);



     getch();
}