#include<stdio.h>
#include<string.h>
void rev(char[]);
void rev(char s[]){
    char r[1000];
    int i,j,count=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    j=count-1;

    for(i=0; i<count; i++){
        r[i]=s[j];
        j--;
    }
    r[i]='\0';
    printf("%s",r);
}
int main()
{
    char s[1000];
    
    printf("Please Enter a string\n");
    gets(s);
    rev(s);
    
    return 0;
}
