#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=array[n-1-i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]==a[i])
        {
            count++;
        }
        
    }
    if (count ==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
    
    

    return 0;
}