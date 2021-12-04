#include <stdio.h>
int main()
{

    char condition;
    float celsius, fahrenheit, temp;

    printf("Enter Temprature in Celsius or Fahrenheit: \n");
    scanf("%f", &temp);

    printf("What type of conversion you want? (hint: 'C/c' for Celsius or 'F/f' for Fahrenheit) \n");
    scanf(" %c", &condition);
    switch (condition)
    {
    case 'f':
    case 'F':
        fahrenheit = (temp * 1.8) + 32;
        printf("The temp in Fahrenheit is: %.2f", fahrenheit);
        break;

    case 'c':
    case 'C':
        celsius = (temp - 32) / 1.8;
        printf("The temp in Celsius is: %.2f", celsius);
        break;
    }
}
