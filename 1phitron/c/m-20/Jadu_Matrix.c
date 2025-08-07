#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int pri = 1, count = 0;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i + j == r - 1)
                {
                    if (a[i][j] != 1)
                    {
                        pri = 0;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        count = 1;
                    }
                }
            }
        }
        if (pri == 1 && count == 0)
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