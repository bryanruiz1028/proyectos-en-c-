#include<iostream.h>
#include<conio.h>
long v1=0,v2=0,p=3,r=0;


void main ()
{
			clrscr();
     cout<<"ingresa el primer numero \n ";

     cin >>v1;
     cout<<"ingresa el segundo numero \n ";

     cin >>v2;

      if(v1!=v2){
      p=v1-v2;
      if(v1>v2)
      {
      v1=v1-1;
      r=v2;
      do{
      r=r++;
      cout <<r<<",";
      }while(r!=v1);
      }else{
      v2=v2-1;//OTRO
      r=v1;
      do{
      r=r++;
      cout<<r<<",";
       }while(r!=v2);}
      }else{}
     getch();

}