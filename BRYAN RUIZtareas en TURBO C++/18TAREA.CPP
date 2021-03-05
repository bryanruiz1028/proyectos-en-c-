#include<iostream.h>
#include<conio.h>
 // presenta por pantalla los 5 numenos inpares mayores al num que se ingreso
int n=0, y=5, a=0;

void main ()
{             clrscr();

     cout<<"ingresa un numero \n ";
     cin >>n;
     a= n % 2 ;
     if(a== 0)
     {n=n+1 ;
     }else
     {
     n=n;
      }
    do{
     cout<<n<<"\n " ;

      y=y-1;
      n=n+2;
      }while(!y==0);


     getch();
}