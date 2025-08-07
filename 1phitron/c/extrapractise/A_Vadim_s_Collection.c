#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int k = 1; k <= test_case; k++)
    {

    char beautiful_num[11];
    int numbers[10] = {0};
    int lowest = 9;
    scanf("%s", &beautiful_num);
    for (int i = 0; i <= 9; i++)
    {
        numbers[beautiful_num[i] - '0']++;
        if ((beautiful_num[i] - '0') < lowest && (beautiful_num[i] - '0') != 0)
        {

            lowest = beautiful_num[i] - '0';
        }
    }
    
    for (int i = 9; i >= lowest; i--)
    {
        if (numbers[i] > 0)
        {
            printf("%d", i);
            numbers[i]--;
        }
    }
    for (int i = lowest; i <= 9; i++)
    {
        if (numbers[i] > 0)
        {
            for (int j = 1; j <= numbers[i]; j++)
            {
                printf("%d", i);
            }
        }
    }
    for (int i = 1; i <= numbers[0]; i++)
    {
        printf("0");
    }
    printf("\n");
    }

    return 0;
}