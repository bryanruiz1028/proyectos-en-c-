#include<iostream.h>
#include<conio.h>

int c=0 ,n =0, s=0;
					// su a 10 veces el mismo numero
void main ()
{                clrscr();

     cout<<      "ingresa tu numero";
     cin>>n  ;
     do {
     s=s+n;
     c=c+1;
     }while(c<=9);

     cout<<s;

     getch();
}