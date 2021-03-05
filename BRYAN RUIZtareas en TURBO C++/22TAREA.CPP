#include<iostream>
#include<conio.h>
//se ingresa por teclado un valor y presenta los 5
int a, b=5, n=0;     // multiplos de 3 mayores al valor ingresado
using namespace std;
int main ()
{
cout<<"ingresa un numero\n ";
cin >>n;
a=n;
n=0;
while(n<=a)
{n=n+3;
}//acaba
do{
cout<<n<<"\n";
n=n+3;
b=b-1;
}while(b>=1);

getch();
}