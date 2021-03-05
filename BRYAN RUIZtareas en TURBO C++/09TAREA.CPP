#include <iostream>
#include<conio.h>
int num=0 ,x =0;
using namespace std; // presenta el factorial no importa si es es 1 o 0
int main ()
{

cout<<"ingresa tu numero\n";
cin>>x;
num=x;
if(x<=1)
     {cout<< "el factorial es " << 1;}
else { do{
     num = num - 1;
     x=x*num;
     }while( num > 1);
cout<<"\n el factorial es "<<x; 
     }
getch();
}