#include <stdio.h>
int even_odd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",even_odd(a));
    return 0;
}