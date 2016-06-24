// to find whether the given number is Palindrome or not

#include <stdio.h>
#include<conio.h>
void main()
{
    int n, reverse = 0, remainder, n1;
    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &n);

    n1 = n;

    //  variable reverse is used to store the reverse of a number 
    while( n!=0 )
    {
	remainder = n%10;
	reverse = reverse*10 + remainder;
	n /= 10;
    }

    // palindrome if orignalInteger(n1) and reversedInteger(reverse) is equal
    if(n1 == reverse)
	printf("%d is a palindrome.", n1);
    else
	printf("%d is not a palindrome.", n1);

					
    getch();
}
