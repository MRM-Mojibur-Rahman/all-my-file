#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int dig;
        scanf("%d", &dig);
        if (dig == 0)
        {
            printf("%d ", dig);
        }

        while (dig != 0)
        {
            printf("%d ", dig % 10);
            dig = dig / 10;
        }
        printf("\n");
    }

    return 0;
}