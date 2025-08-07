#include <stdio.h>
int main()
{
    int array_size, k;
    scanf("%d %d", &array_size, &k);

    int array[array_size];
    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }
    int ans = 0;
    for (int i = 0; i < array_size - 1; i++)
    {
        for (int j = i + 1; j < array_size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    int j = array_size - 1;
    for (int i = 0; i < j; i++)
    {

        if (array[i] + array[j] <= k)
        {
            ans++;
        }

        j--;
    }
    printf("%d",ans);

    return 0;
}