#include<iostream>
#include<conio.h>
using namespace std;
long n,p,c;
int main ()     //p x p  los 5 numeros pares mayor al numero ingresado
{
	cout<<"\n ingrese un numero\n" ;
	do{
	cin>>n;
	}while(n<1);
    do{
	p=p+2 ;
	} while(p!=n,p<n-1);
	if(n!=p){
	n=n-1;  }
	else{};
	do{
	n=n+2;
	c=c+1;
	cout<<n<<",";
	}while( c<5);
getch();
}