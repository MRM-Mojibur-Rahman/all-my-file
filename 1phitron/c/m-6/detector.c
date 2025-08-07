#include <stdio.h>
int main()
{
    int num;
    int even, odd, positive, negetive;

    
    if (num > 0)
    {
        positive = positive + 1;
        if (num % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    else
    {
        negetive = negetive + 1;
        if (num % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }

    return 0;
}