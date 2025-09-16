/*declare a local variable inside a function and try to access it outside a function.
 compare this with accessing the global variable from within the function */

 #include <stdio.h>

void myFunction() {
    int localVar = 10;   
    printf("Inside function: localVar = %d\n", localVar);
}

int main() {
    myFunction();  
    return 0;
}
