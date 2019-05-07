#include <stdio.h>

int fact(int n);

int main(void)
{
    int x = 10;
    int y = fact(x);
    printf("the answer is %i", y);
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else 
        return n * fact(n-1);
}