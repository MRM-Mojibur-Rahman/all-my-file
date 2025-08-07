#include <stdio.h>
int char_to_ascii(char a)
{
    int ans = (int)a;
    return ans;
}
int main()
{
    char a;
    scanf("%c", &a);
    int ans = char_to_ascii(a);
    printf("%d",ans);
        return 0;
}