#include <stdio.h>

int prime[1000001];
// Function to compute prime numbers using Sieve of Eratosthenes
void sieve_eratosthenes()
{
    // Step 1: Assume all numbers are prime initially
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    // Step 2: 0 and 1 are NOT prime numbers
    prime[0] = prime[1] = 0;
    // Step 3: Start eliminating non-prime numbers
    // We only need to go up to sqrt(1000000) = 1000
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            // Step 4: Mark all multiples of i as NOT prime
            // Start from i*i (important optimization)
            // because smaller multiples (i*2, i*3,...) were already handled
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    sieve_eratosthenes();
    int n = 29;
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
        {
            printf("%d ", i);
        }
    }
    return 0;
}