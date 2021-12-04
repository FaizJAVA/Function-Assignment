#include <stdio.h>
void lcm();
void lcm(){
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;

    do{
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }while (1) ;
}
int main() {
    lcm();
    return 0;
}