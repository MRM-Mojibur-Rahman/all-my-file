#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        int is_prime = 1;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && i!=j)
            {
                is_prime = 0;
                break;
            }
        }
        if (i!=1 && is_prime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}