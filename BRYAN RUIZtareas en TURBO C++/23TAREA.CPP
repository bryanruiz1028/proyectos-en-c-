#include<iostream.h>
#include<conio.h>

long num1, num2,num3,num4,b, a;
 //presenta el numero mayor  DE LOS 4 NUMEROS INGRESADOS
 // no importa si son numeros grandes
void main ()
{                clrscr();

     cout<<      "ingresa el primer numero\n";
     cin>>num1  ;
     cout<<"\ningresa el segundo numero\n";
     cin>>num2 ;
      cout<<      "\ningresa el tercer numero\n";
     cin>>num3  ;
     cout<<"ingresa el cuarto numero\n";
     cin>>num4 ;

    if(num1>num2){
    a=num1;
    } else{
     a=num2;}
     if(num3>num4){
    b=num3;
    } else{
     b=num4;}

      if(b>a){

     cout<<"el numero mayor es "<<b;
     }else{
     cout<<"el numero mayor es "<<a;}
     getch();
}