#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int sum = 0;
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            for (int l = y + 1; l < x; l++)
            {
                if (l % 2 != 0)
                {
                    sum = sum + l;
                }
            }
        }

        else if (y > x)
        {
            for (int l = x + 1; l < y; l++)
            {
                if (l % 2 != 0)
                {
                    sum = sum + l;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}