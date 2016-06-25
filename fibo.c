/* Fibonacci Series c language */
#include<stdio.h>
#include<conio.h>
 
void main()
{
   int n, a = 0, b = 1, next, c;
   clrscr();
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
	 next = c;
      else
      {
	 next = a + b;
	 a = b;
	 b = next;
      }
      printf("%d\n",next);
   }

   getch();

}
