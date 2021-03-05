#include<iostream>
#include<conio.h>
using namespace std;
int n,c=5; //p x p 5 numeros superiores al que se ingreso
int main ()
{
cout<<"8ingrese un numero\n" ;
cin>>n;
do{
    n=n+1;
    c=c-1;
    cout<<n<<".";
}while(!c==0);
}
