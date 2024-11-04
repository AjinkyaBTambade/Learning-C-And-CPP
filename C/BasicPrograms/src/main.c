// header file
#include<stdio.h>
#include <math.h>
#include "handler.h"

// entry point function
int main()
{
    // function calling
    display();
    
    int add=addtion(45,65);
    int sub = subtraction(26, 25);
    int mul = multiplication(82, 5);
    int div = division(76, 2);
    int mod = modulus(76, 2);

    printf("\n Addition: %d",add);
    printf("\n Subtraction: %d",sub);
    printf("\n multiplication: %d", mul);
    printf("\n division: %d", div);
    printf("\n modulus: %d", mod);

    return 0;
}

// g++ -Iinclude -c ./src/handler.c -o ./build/handler.o
// g++ -Iinclude -c ./src/main.c -o ./build/main.o
// g++ -Iinclude -c ./src/math.c -o ./build/math.o
// g++ ./build/main.o ./build/math.o ./build/handler.o -o ./build/output.exe
// cd build
// output.exe