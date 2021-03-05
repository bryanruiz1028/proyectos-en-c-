#include<iostream.h>
#include<conio.h>

long num1, num2,num3,num4,b, a;
  //ingresa 3 numeros y los ordena de mayor a menor
    //ademas sirve para numeros muy grandes
void main ()
{                clrscr();

     cout<<      "ingresa el primer numero\n";
     cin>>num1  ;
     cout<<"\ningresa el segundo numero\n";
     cin>>num2 ;
      cout<<      "\ningresa el tercer numero\n";
     cin>>num3  ;

    if(num1>num2){
    a=num1;
    b=num2;
    } else{
     a=num2;
     b=num1;
     }
     if(num3>a){
    cout<<num3<<","<<a<<","<<b;
    } else{ if(num3>b){
     cout<<a<<","<<num3<<","<<b;
     } else{
     cout<<a<<";"<<b<<";"<<num3;} }


     getch();
}