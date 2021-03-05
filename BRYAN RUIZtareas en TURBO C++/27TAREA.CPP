#include<iostream>
#include<conio.h>
using  namespace std;
long n=0, r=1,acu=0, x=0;        // CODIGO  PARA SABER SI EN NUMERO ES UN
				   //  PALINDROMO
int main ()
{
cout<<"ingresa un numero\n ";
do{
    cin >>n;
}while(n<10);
    x=n;
do{
    r=n%10;
    n=n/10;
    acu=(acu*10)+r;

}while(n>0);
    if(acu==x)
    {cout<<"si es UN PALINDROMO v: ";
    }else{
cout<<"no es  SIGA PARTIPANDO ): ";    }
getch();
}