#include <stdio.h>
#include <string.h>
int is_palindrome(char str1[])
{
    char str2[strlen(str1)];
    
    for (int i = 0; i < strlen(str1); i++)
    {

        str2[i]=str1[strlen(str1)-1-i];
        str2[strlen(str1)]='\0';
    }
    return strcmp(str1,str2);

   
    
    
}
int main()
{
    char string[1001];
    scanf("%s", &string);
    int ans = is_palindrome(string);
    if (ans == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    

    return 0;
}