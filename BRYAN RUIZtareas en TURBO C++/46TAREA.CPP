#include<iostream.h>
#include<conio.h>
char nom[20];
int  pu,c,r;

void main ()
{clrscr();
       cout<<"NOMBRE DEL PRODUCTO\n" ;
	 cin>>nom;
	 cout<<"precio U\n";
	 cin>>pu;
	 cout<<"cantidad\n";
	 cin>>c;
	 r=pu*c;
       cout<<nom<<"="<<r;

     getch();

}