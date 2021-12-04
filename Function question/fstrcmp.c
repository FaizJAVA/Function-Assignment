#include<stdio.h>
#include <string.h>
char str_cmp(char[], char[]);
char str_cmp(char x[], char y[]){
  int c,i;
  if(strlen(x)==strlen(y))
    {
    	for(i=0;x[i]!='\0';i++)  
        {
        	if(x[i]==y[i])
        	 c++;
 	    }
 	    if(c==i)
          printf("Strings are equal");
        else
          printf("Strings are not equal");
    }
    else
     printf("Strings are not equal");
}
 
int main()
{
    char s1[1000],s2[1000];
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    str_cmp(s1,s2);
    
 
    return 0;
}