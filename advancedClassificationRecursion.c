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
    return (power((x%10), digits_counter)) + (power((x/10), digits_counter)); //Handling the last digit aside from the rest.
}

int isArmstrong(int x)
{
    int digits_counter = number_of_digits(x);
    int sum = armstrong_sum(x, digits_counter);
    return (sum == x);
}

int isPalindrome (int x)
{
    int digits_counter = number_of_digits(x);
    if(digits_counter == 1 )
    {
        return 1;
    }
    if(digits_counter == 2){
        return ((x%10) == (x/10));
    }
    
    int inner_x = x % (power(10, digits_counter-1));
    inner_x = inner_x/10;

    return (((x%10) == (x / power(10, digits_counter-1))) && isPalindrome(inner_x));
}







