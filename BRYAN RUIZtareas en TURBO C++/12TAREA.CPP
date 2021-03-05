#include <iostream>
#include <conio.h>
using namespace std;

int a=3 ,b =1,n=0;
// tabla suma del numero que se ingrese
int main ()
{
cout<<"ingresa un numero para hacer la tabla de suma\n ";
cin>>n;
do{
    a=n+b;
    cout<<n<<"+"<<b<<"="<<a <<"\n";
    b=b++;
}while(b<13);
}