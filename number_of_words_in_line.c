//To find the number of words in a line

#include<stdio.h>
#include<conio.h>
int main()
{
  int count_words=0,i;
  char str[20];
  clrscr();
  
  
  printf("Enter string : ");
  gets(str);
  
  //For loop to count the number of words
  for(i=0; str[i]!=NULL; i++)
  {

      if(str[i]==' ')
      count_words++;
  }
  printf("\nNumber of words in a line : % d",count_words+1); 
  getch();
  return 0;
}
