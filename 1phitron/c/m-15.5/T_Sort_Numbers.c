#include <stdio.h>
void sort(int a, int b, int c)
{
    if (a ==b )
    {
        if (b < c)
        {
            printf("%d\n", a);
            printf("%d\n", b);
            printf("%d\n", c);
            
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
            
        }
         return;
    }
    else if (a ==c )
    {
        if (b < c)
        {
            printf("%d\n", b);
            printf("%d\n", a);
            printf("%d\n", c);
            
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
            
        }
         return;
    }
    else if (b ==c )
    {
        if (a < c)
        {
            printf("%d\n", a);
            printf("%d\n", b);
            printf("%d\n", c);
            
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
            printf("%d\n", a);
            
        }
        return;
    }
    
    
    if (c< b && c <a)
    {
         if (b < a)
        {
            printf("%d\n", c);
            printf("%d\n", b);
            printf("%d\n", a);
           
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
            
        }
    }
    else if (b<a && b < c)
    {
        if (a > c)
        {
            printf("%d\n", b);
            printf("%d\n", c);
            printf("%d\n", a);
            
        }
        else
        {
            printf("%d\n", b);
            printf("%d\n", a);
            printf("%d\n", c);
            
        }
    }
    else
    {
        if (b < c)
        {
            printf("%d\n", a);
            printf("%d\n", b);
            printf("%d\n", c);
            
        }
        else
        {
            printf("%d\n", a);
            printf("%d\n", c);
            printf("%d\n", b);
            
        }
    }
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort(a, b, c);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}