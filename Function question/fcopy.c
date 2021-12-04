#include<stdio.h>
#include<string.h>
void copy(char[],char[]);
void copy(char s1[], char s2[]){
    int i;
    printf("Please Enter String\n");
    gets(s1);
    for(i=0; s1[i]!='0'; i++){
        s2[i]=s1[i];
    }
    printf("Copied String %s",s2);
}
int main()
{
    char s1[1000],s2[1000];
    copy(s1,s2);
    
    return 0;
}