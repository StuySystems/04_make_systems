/*
 * Ethan Shenker
 * Systems Pd. 10
 */

#include <stdio.h>
#include "euler.h"

int main()
{
    int euler1 = euler_01();
    int euler5 = euler_05();
    int euler6 = euler_06();

    printf("The answer to the first euler problem is %d\n", euler1);
    printf("The answer to the fifth euler problem is %d\n", euler5);
    printf("The answer to the sixth euler problem is %d\n", euler6);

    return 0;
}