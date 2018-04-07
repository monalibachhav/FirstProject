#include<iostream.h>
#include<conio.h>

void swap(int *a, int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}

void main() 
{  
 int a=100, b=200;  
 clrscr();  
 swap(&a, &b);  // passing value to function
 cout<<"\n"<<"Value of a"<<a;
 cout<<"Value of b"<<b;
 getch();  
}