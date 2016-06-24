//To find the reverse of a number

#include <stdio.h>
#include<conio.h>
int main()
{
  int n, reverse = 0,remainder;
  clrscr();
  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  //This loop finds the reverse of a number
  while (n != 0)
  {
     remainder=n%10;
     reverse = reverse * 10+remainder;
     n = n/10;
  }

  printf("Reverse of entered number is = %d\n", reverse);
  getch();
}
