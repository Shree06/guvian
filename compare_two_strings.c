//Comparing two strings without using strcmp() function

#include<stdio.h>

void main()
{

    char str1[100],str2[100];
    int i=0,a=0;
    clrscr();


    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    //This loop is used to compare two strings without using strcmp() function
    while(str1[i]&&str2[i]!='\0')
    {
      if(str1[i]!=str2[i])
      a=1;
      i++;
    }
    if(a==0)
    printf("The given string are same");
    else
    printf("The given string is different");
    getch();
}






 


   

