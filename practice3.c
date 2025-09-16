/*Declare a variable with different code
blocks, and test their accessibility within and outside their block. */

#include <stdio.h>

int main() {
    int x = 10;   

    printf("Outside block, x = %d\n", x);

    {
        int y = 20;   
        printf("Inside first block, x = %d, y = %d\n", x, y);

        {
            int z = 30;  
            printf("Inside nested block, x = %d, y = %d, z = %d\n", x, y, z);
        }
    }
    printf("Back outside block, x = %d\n", x);

    return 0;
}
