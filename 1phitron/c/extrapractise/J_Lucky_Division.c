#include <stdio.h>
int digits(int num)
{
    int rem, dev = num;

    while (dev != 0)
    {
        rem = dev % 10;

        if (rem != 4)
        {
            if (rem != 7)
            {
                return 0;
            }
        }
        dev = dev / 10;
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d", &num);
    if (1 <= num && num <= 1000)
    {
        if (num % 4 == 0 || num % 7 == 0)
        {
            printf("YES");
        }
        else if (digits(num) == 1)
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }
    }
    else
    {
       printf("NO");
    }
    

    return 0;
}
    

    