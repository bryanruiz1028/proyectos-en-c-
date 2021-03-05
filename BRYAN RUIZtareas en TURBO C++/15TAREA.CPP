#include<iostream>
#include<conio.h>
using namespace std;
  // ingresa un valor n y presenta por pantalla dicho numero al revez
  // este codigo funciona tambien con mumeros grandes
long n=1 ,r =1,acu=0 ;
// tabla suma del 1 al 5
int main ()
{  
cout<<"ingresa un numero "  ;
cin >>n;
do{
    r= n%10;
    acu=(acu*10)+r;
    n=n/10  ;}
while(n>0);
    cout<<acu;
getch();
}