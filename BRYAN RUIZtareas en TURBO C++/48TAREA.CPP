#include<iostream>
#include<conio.h>
using namespace std;//CALCULAR EL PRECIO TOTAL CON IVA
char nom[10];
double i;
long pu,c,r,d;
int main (){
cout<<"por la compra mayor a 250 $ hay un descuento del %8"  ;
cout<<"\n NOMBRE DEL ARTICULO\n";
cin>>nom;
cout<<"precio UNITARIO\n";
cin>>pu;
cout<<"cantidad\n";
cin>>c;
r=pu*c;
i=r*0.12;
r=r+i;
if(r>250){
    d=r*0.08;
	r=r-d;
    cout<<nom<<"="<<r<<"==con el descuento del 8%  incluidoiva";}
else{
	cout<<nom<<"="<<r;}
getch();
}