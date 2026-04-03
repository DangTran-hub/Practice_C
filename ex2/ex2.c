#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void sieve_prime_section(int left, int right)
{
    int prime[right - left + 1];
    for (int i = 0; i <= right - left + 1; i++)
    {
        prime[i] = 1;
    }
    for (int i = 2; i <= sqrt(right); i++)
    {
        for (int j = max(i * i, (left + i - 1) / i * i); j <= right; j += i)
        {
            prime[j - left] = 0;
        }
    }
    for (int i = max(2, left); i <= right; i++)
    {
        if (prime[i - left])
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    sieve_prime_section(4, 29);
}