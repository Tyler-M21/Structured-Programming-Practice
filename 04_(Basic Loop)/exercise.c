#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 97;
    int i;
    int is_prime = 1;

    printf("Number for testing is: %d\n", b);

    if (b <= 1)
        {
        is_prime = 0;
    } else
    {
        for (i = 2; i <= b/2; i++) {
            if (b % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        {
        printf("Number is a prime number\n");
    }
    else {
        printf("Number is not a prime number\n");
    }
    return 0;
}
