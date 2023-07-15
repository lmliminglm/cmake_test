
#include <stdio.h> 
#include <stdlib.h>
#include "public.h"

int main()
{
    int a = 10;
    int b = 2;

    printf("add: %d\n", add(a, b));
    printf("subtract: %d\n", subtract(a, b));
    printf("multiply: %d\n", multiply(a, b));
    printf("devide: %d\n", devide(a, b));
    
    return 0;
}