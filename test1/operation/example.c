/**
 * @file example.c
 * @author liming (liming@abupdate.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-15
 * 
 * @copyright Copyright (c) 2023  上海艾拉比智能科技有限公司
 * 
 */

#include <stdio.h> 
#include <stdlib.h>
#include "public.h"

int main()
{
    int a = 10;
    int b = 5;

    printf("add: %d\n", add(a, b));
    printf("subtract: %d\n", subtract(a, b));
    printf("multiply: %d\n", multiply(a, b));
    printf("devide: %d\n", devide(a, b));
    
    return 0;
}