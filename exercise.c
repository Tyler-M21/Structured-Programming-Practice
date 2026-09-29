#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=12;
    int b=5;
    int sum, difference, quotient, remainder;
    printf("Enter two integers : %d, %d", a, b);

     sum = a+b;
     printf("The sum of a and b is: %d\n", sum);

     difference = a-b;
     printf("The difference between a and b is: %d\n", difference);

     quotient=a/b;
     printf("The quotient of a and b is: %d\n", quotient);

     remainder=a%b;
     printf("The remainder between a and b after division is: %d\n", remainder);

    return 0;
}
