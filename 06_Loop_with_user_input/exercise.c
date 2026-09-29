#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Testing the post-increment (i++)\n");
    for(int i=0; i<=5; i++){
        printf("i = %d\n", i);
    }

    printf("\nTesting the pre-increment (++i)\n");
    for(int i=0; i<5; ++i){
        printf("i = %d\n", i);
    }
    return 0;
}
