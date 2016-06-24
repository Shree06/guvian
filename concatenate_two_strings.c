//Concatenating two strings without using strcat()

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
  char str1[25],str2[25];
  int i=0,j=0;
  clrscr();
  
  //Getting two strings
  printf("\nEnter the first string\n");
  scanf("%s",str1);
  printf("\nEnter the second string\n");
  scanf("%s",str2);

  //Concatenating two strings without using strcat() function
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("%s",str1);
  getch();
}


