//To find the power of a number

#include<conio.h>
#include<stdio.h>
void main()
{
  int base=0,po,b,i;
  clrscr();

  printf("\n Enterthe base");
  scanf("%d",&base);

  if(base==0)
  printf("The number is zero");//Base is zero
  else
  if(base==1)
  printf("The number is one");//Base is one
  else                        //If base is neither zero nor one
  {
     printf("\n Enter the power");
     scanf("%d",&po);
     if(po==0)
     printf("The number is one");//Power is zero
     else
     if(po>0)
     {
         b=base;
         for(i=1;i<po;i++)
         b=b*base;
     }
     printf("The power of %d is %d",base,b);
  }

  getch();
}

