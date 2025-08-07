#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    // char string[100001];
    int max_length = 10000000;
    char *string = (char *)malloc((max_length + 1) * sizeof(char));
    if (string == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    scanf("%s",string);
    int alphabate[26]={0};
    int n = strlen(string);
    for (int i = 0; i < n; i++)
    {
       alphabate[string[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabate[i]>0)
        {
            printf("%c : %d\n",i+'a',alphabate[i]);
            
        }
        
    }

    return 0;
}