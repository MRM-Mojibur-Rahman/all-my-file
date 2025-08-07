#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001];
    scanf("%s", &s1);
    char s2[1001];
    for (int i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[strlen(s1) - 1 - i];
    }

    int count=0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[i])
        {
            count++;
        }
    }
    if (count == strlen(s1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}