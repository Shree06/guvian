//Swapping two numbers by using bitwise operator 


#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();

  printf("\n Enter the first number\n");
  scanf("%d",&a);
  printf("\n Enter the second number\n");
  scanf("%d",&b);

  printf("\n Before swapping\na=%d\tb=%d",a,b);
  
  //Swapping two numbers by using bitwise operator
  a=a^b;
  b=a^b;
  a=a^b;

  printf("\n After swapping\na=%d\tb=%d",a,b);
  getch();
}
