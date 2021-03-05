#include<iostream.h>
#include<conio.h>

int a=3 ,b =1,c=0;
//   HACE TRES SUMAS TAL Y COMO ESTA EN EL DOCUMENTO
// SE REPITE EL EJERCICIO CON EL 10
void main ()
{                clrscr();
     do{
     c=a+b;
     cout<<a<<"+"<<b<<"="<<c <<"\n";
     b=b++;

     }while(b<4);

     getch();
}