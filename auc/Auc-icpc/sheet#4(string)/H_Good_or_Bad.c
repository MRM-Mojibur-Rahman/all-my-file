#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int l = 1; l <= test; l++)
    {
        char string[100001];
        scanf("%s", &string);
        int is_good = false;
        for (int i = 0; i < strlen(string) - 2; i++)
        {
            int j = i + 1, k = i + 2;
            if ((string[i] == '0' && string[j] == '1' && string[k] == '0') || (string[i] == '1' && string[j] == '0' && string[k] == '1'))
            {
                printf("Good");
                is_good = true;
                break;
            }
        }
        if (is_good == false)
        {
            printf("Bad");
        }

        printf("\n");
    }

    return 0;
}