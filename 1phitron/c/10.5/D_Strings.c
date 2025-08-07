#include <stdio.h>
#include <string.h>
int main()
{
    char s1[11];
    char s2[11];
    scanf("%s", &s1);
    scanf("%s", &s2);
    int lenth1 = strlen(s1);
    int lenth2 = strlen(s2);
    printf("%d %d\n", lenth1, lenth2);
    char s3[21];
    for (int i = 0; i < lenth1; i++)
    {
        s3[i]=s1[i];
    }
    for (int i = lenth1; i <= lenth2+lenth1; i++)
    {
        s3[i]=s2[i-lenth1];
    }
    printf("%s\n",s3);
    char temp;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0]=temp;
    printf("%s %s",s1 , s2);

    
    return 0;
}