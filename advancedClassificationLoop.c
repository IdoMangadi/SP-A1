#include <stdio.h>

/**
 * A function that calculating 'x' in the power of 'p'.
*/
int power(int x, int p)
{
    if(p == 1)
    {
        return 1;
    }
    // TODO: complete if (p<0)
    for(int i=0; i<p; i++){

    }
}

int isArmstrong(int x)
{
    int num = x; //a number to work on
    int sum = 0;
    
    int digits_counter = 0;
    while(num > 0)
    {
        digits_counter++;
        num = num / 10;
    }

    num = x;
    for(int i=0; i<digits_counter; i++)
    {   
        sum = sum + power((num%10),digits_counter);
    }

}

int isPalindrome(int x)
{

}