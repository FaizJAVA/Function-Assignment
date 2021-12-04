#include<stdio.h>
#include<string.h>

char nameabr(char[],char[],char[]);
char nameabr(char a[],char b[],char c[]){
    printf("%c. %c. %s\n", a[0], b[0], c);

}
int main()
{

    char fname[20], mname[20], lname[20]; 

     printf("Enter full name (first middle last): ");

     scanf("%s %s %s", fname, mname, lname);

     printf("Abbreviated name: ");

     

    
    
    return 0;
}
