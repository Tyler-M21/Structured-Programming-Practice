#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Display three integers
    int d=7;
    int e =15;
    int f=6;

    int sum, average, product, smallest, largest;

       printf("Display three numbers: %d, %d, %d\n", d, e, f);

       sum= d+e+f;
       average= (d+e+f)/3;
       product= d*e*f;

        smallest = d;
        largest =f;

    if (e < smallest)
        {
            printf("smallest is %d\n", e);
        }
    if (f < smallest){
        printf("smallest is %d\n", f);
    }


    if (e > largest){
            printf("largest is:%d\n", e);
    }
    if (f > largest){
            printf("largest is: %d\n", f);
    }

         printf("Their sum is: %d\n", sum);
         printf("Their average is: %d\n", average);
         printf("Their product is:%d\n", product);


    return 0;
}
