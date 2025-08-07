#include <stdio.h>
int main()
{
    int lim1, lim2;
    scanf("%d %d", &lim1, &lim2);
    int blance_num = -1;
    for (int i = lim1; i <= lim2; i++)
    {
        int dev = i;
        int rem, even = 0, odd = 0;
        for (; dev != 0;)
        {
            rem = dev % 10;
            dev = dev / 10;
            if (rem%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even==odd)
        {
            blance_num++;
            printf("%d\n",i);;
        }
    }
    if (blance_num==-1)
    {
        printf("%d",blance_num);
       
    }
    

    return 0;
}