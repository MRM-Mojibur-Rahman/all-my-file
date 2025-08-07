#include <stdio.h>
long long int factorial(int n, int i)
{
    if (i == n)
    {
        return n;
    }

    long long int fact = i * factorial(n, i + 1);

    return fact;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int fact = factorial(n, 1);
    printf("%lld", fact);
    return 0;
}