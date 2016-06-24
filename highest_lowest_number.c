//Highest and lowest number in an array using c

#include<conio.h>
#include<stdio.h>
void main()
{
   int high,low,val[100],i;
   high=low=val[0];
   clrscr();

   printf("\nEnter the 10 numbers..\n");
   for(i=0;i<10;i++)
   scanf("%d",&val[i]);

   //To find the highest and lowest number
   for(i=0;i<10;i++)
     {
       if(val[i]>high)
       high=val[i];
       if(val[i]<low)
       low=val[i];
     }

   printf("Highest value is %d",high);
   printf("Lowest value is %d",low);
   getch();
}
