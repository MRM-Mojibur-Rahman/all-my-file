#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int dev2 = 0, dev3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0&&array[i]%3==0)
        {
            dev2++;
        }

        else if (array[i] % 2 == 0)
        {
            dev2++;
        }
        else if (array[i] % 3 == 0)
        {
            dev3++;
        }
    }
    printf("%d %d",dev2,dev3);

    return 0;
}