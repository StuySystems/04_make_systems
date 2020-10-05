/*
 * Ethan Shenker
 * Systems Pd. 10
 */

#include <stdio.h>
#include "euler.h"

int euler_01()
{
    int sum = 0;
    int i;
    for (i = 1; i < 1000; i++) // for all numbers between 1 and 1,000
    {
        if (i % 3 == 0 || i % 5 == 0) // any number divisible by either 3 or 5
        {
            sum += i;
        }
    }
    return sum;
}

int euler_05()
{
    char done = 0; // boolean variable
    long num_checked = 1;
    while (!done)
    {
        if (is_div(num_checked))
        {
            done = 1; // end iteration
        }
        else
        {
            num_checked += 1; // continue
        }
    }
    return num_checked;
}

int euler_06()
{
    int i;
    int sum = 0;
    int square_sum = 0;
    int sum_squares = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += i;
        sum_squares += i * i; // sum of the squares
    }
    square_sum = sum * sum; // square of the sum
    return square_sum - sum_squares;
}

int is_div(int num)
{
    int i;
    for (i = 1; i <= 20; i++) // for each number 1 - 20
    {
        if (num % i != 0)
        {
            return 0; // return false if one doesn't work
        }
    }
    return 1; // true otherwise
}