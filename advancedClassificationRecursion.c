#include <stdio.h>
#include "NumClass.h"

int power(int x, int p){
    if (p == 0)
    {
        return 1;
    }
    return x * (power(x, (p-1)));
}

int number_of_digits(int x)
{
    if (x < 10 && x > (-10))
    {
        return 1;
    }
    return 1 + (number_of_digits(x/10));
}

int armstrong_sum(int x, int digits_counter)
{
    if(x == 0){
        return 0;
    }
    return (power((x%10), digits_counter)) + armstrong_sum(x/10, digits_counter); //Handling the last digit aside from the rest.
}

int isArmstrong(int x)
{
    int digits_counter = number_of_digits(x);
    int sum = armstrong_sum(x, digits_counter);
    return (sum == x);
}

int palindrome_check (int x, int i, int j)
{
    if(i <= j)
    {
        return 1;
    }
    int digit_in_i = (x / power(10, i-1)) % 10;
    int digit_in_j = (x / power(10, j-1)) % 10;
    if (digit_in_i != digit_in_j)
    {
        return 0;
    }
    return palindrome_check(x, i-1, j+1);
}

int isPalindrome (int x)
{
    int i = number_of_digits(x);
    int j = 1;
    return palindrome_check(x, i, j);
}











