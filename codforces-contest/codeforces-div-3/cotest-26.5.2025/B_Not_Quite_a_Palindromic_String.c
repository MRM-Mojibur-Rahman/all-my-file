#include <stdio.h>
#include <string.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int m = 0; m < test_case; m++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char s[n];
        scanf("%s", &s);
        int count=0;

        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] = '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            s[]
            
            
        }
        // if (s[i]==s[n-i+1])
        // {
        //     count++;
        // }
        if (k==count)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }

    return 0;
}