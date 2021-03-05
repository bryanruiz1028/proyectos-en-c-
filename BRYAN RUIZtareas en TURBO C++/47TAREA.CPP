#include<iostream>
#include<conio.h>
using namespace std;
char nom[20];
double pu,c,r,i;
// INGRESAR EL NOMBRE DEL PRODUCTO CALCULAR EL PRECIO TOTAL CON IVA
int main ()
{
cout<<"NOMBRE DEL PRODUCTO\n" ;
cin>>nom;
cout<<"precio U\n";
cin>>pu;
cout<<"cantidad\n";
cin>>c;
r=pu*c;
i=r*0.12;
r=r+i;
cout<<nom<<"="<<r;
getch();
}