/* Declare a static local variable insde a function observe 
how its value persist inside a function calls.*/
#include <stdio.h>


void counterFunction() {
    static int count = 0;  
    count++;               
    printf("Function called %d times\n", count);
}

int main() {
    counterFunction();  
    counterFunction(); 
    counterFunction();  
    counterFunction();  

    return 0;
}
