#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        char x[51], y[51];
        scanf("%s %s", &x, &y);
        if (strlen(x)<strlen(y))
        {
            for (int i = 0; x[i] != '\0'; i++)
            {
                printf("%c%c", x[i], y[i]);
            }
            for (int i = strlen(x); i < strlen(y); i++)
            {
                printf("%c",y[i]);
            }
            
            
        }
        else
        {
            for (int i = 0; y[i] != '\0'; i++)
            {
                printf("%c%c", x[i], y[i]);
            }
            for (int i = strlen(y); i < strlen(x); i++)
            {
                printf("%c",x[i]);
            }
        }
        
        printf("\n");
    }


    return 0;
}