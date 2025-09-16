/*Declare a global variable outside all functions and use it 
inside various functions to understand it's accessibility*/ 

#include<stdio.h>


int globalVar = 10;


void functionOne() {
    printf("Function One: globalVar = %d\n", globalVar);
    globalVar += 5; }


void functionTwo() {
    printf("Function Two: globalVar = %d\n", globalVar);
    globalVar *= 2;  
}

int main() {
    printf("Main: globalVar = %d\n", globalVar);

    functionOne();  
    functionTwo();  

    printf("Main after modifications: globalVar = %d\n", globalVar);

    return 0;
}
