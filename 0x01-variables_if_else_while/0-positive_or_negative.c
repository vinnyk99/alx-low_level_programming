#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n = rand() % 201 - 100; // random number between -100 and 100
    printf("The number is: %d\n", n);
    
    if (n > 0)
    {
        printf("is positive");
    }
    else if (n == 0)
    {
        printf("is zero");
    }
    else
    {
        printf("is negative");
    }
    
    return 0;
}

