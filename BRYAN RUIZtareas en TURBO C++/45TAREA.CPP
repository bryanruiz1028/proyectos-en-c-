#include<iostream>
#include<conio.h>
using namespace std;
int p,c,v;//SE INTRODUCE POR TECLADO EL PRESIO DEL PRODUCTO Y LA
// LA CANTIDAD Y P X P EL VALOR A PAGAR
int main ()
{
cout<<"precio\n";
cin>>p;
cout<<"cantidad\n";
cin>>c ;
v=p*c;
cout<<"\n"<<v<<"==precio a pagar";
getch();
}