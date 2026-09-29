#include <stdio.h>
#include <stdlib.h>


int main()
{
    int even = 0, odd = 0, multiples_Of_five = 0;

    for (int i = 1; i <= 30; i++) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (i % 5 == 0) {
            multiples_Of_five++;
            printf("%d is a multiple of 5\n", i);
        }
    }
    printf("%d Even numbers, %d Odd numbers, %d Multiples of five\n", even, odd, multiples_Of_five);
    return 0;
}
