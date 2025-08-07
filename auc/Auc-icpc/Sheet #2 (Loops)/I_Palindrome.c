#include <stdio.h>
#include <string.h>
int main()
{
    long long int num;
    scanf("%lld", &num);
    long long int dev = num, rem;
    char s[9];
    int num1;

    for (int i = 0; dev != 0; i++)
    {
        rem = dev % 10;
        dev = dev / 10;

        s[i] = rem + '0';
        num1 = i;
    }
    s[num1 + 1] = '\0';
    int j = strlen(s) - 1;
    int start;
    for (int i = 0; i <= j; i++)
    {
        if (s[i]>'0')
        {
            start=i;
            break;
        }
        
    }
    for (int i = start; i <=j; i++)
    {
        printf("%c",s[i]);
    }
    

    printf("\n");
    int p = 0;
    for (int i = 0; i < j; i++)
    {

        if (s[i] != s[j - i])
        {
            printf("NO");
            p = 1;
            break;
        }
    }
    if (p == 0)
    {
        printf("YES");
    }

    return 0;
}