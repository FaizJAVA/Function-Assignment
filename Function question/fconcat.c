#include<stdio.h>
#include<string.h>
void concate(char[],char[]);
void concate(char s1[],char s2[]){
    
    int i,count=0;
    for(i=0; s1[count]!=0; i++,count++);
    for(i=0; s2[i]!=0; i++){
        s1[count]=s2[i];
        count++;
    }
    for(i=0; i<count; i++){
        printf("%c",s1[i]);
    }
}
int main()
{
    char a[1000],b[1000];
    printf("Please enter strig one\n");
    gets(a);
    printf("Please enter strig two\n");
    gets(b);

    concate(a,b);

    return 0;
}