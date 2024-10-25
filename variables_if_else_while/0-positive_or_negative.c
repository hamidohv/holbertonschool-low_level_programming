#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Main function */
int main(void)
{
    int n;

    srand(time(0)); // Seed the random number generator
    n = rand() - RAND_MAX / 2; // Generate a random number

    /* Check if n is positive, negative, or zero */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0); // Return success
}
