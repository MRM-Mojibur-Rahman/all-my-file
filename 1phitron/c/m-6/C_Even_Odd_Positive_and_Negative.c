#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negetive = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
        {
            positive = positive + 1;
            if (x % 2 == 0)
            {
                even = even + 1;
            }
            else
            {
                odd = odd + 1;
            }
        }
        else if (x<0)
        {
            negetive = negetive + 1;
            if (x % 2 == 0)
            {
                even = even + 1;
            }
            else
            {
                odd = odd + 1;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                even = even + 1;
            }
            else
            {
                odd = odd + 1;
            }
        }
        
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negetive);

    return 0;
}