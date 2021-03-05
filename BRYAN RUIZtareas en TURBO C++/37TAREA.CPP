#include<iostream>
#include<conio.h>
using namespace std; 
int n,a;        //P X P SI UN NUMERO ES PAR O INPAR
int main () 
{
cout<<"ingresa el numero\n ";
cin >>n;
a=n%2;
if(a==0)
    { cout<<"es un numero par";
    }
else
    {
    cout<<"es un numero impar ";
    }

getch();
}