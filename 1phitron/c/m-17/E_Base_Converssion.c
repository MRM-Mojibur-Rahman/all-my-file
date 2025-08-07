#include <stdio.h>
void binary(int dev, int rem)
{
    if (dev == 0)
    {
        return;
    }
    
    
        rem = dev % 2;
        dev = dev / 2;
        binary(dev, rem);
        printf("%d", rem);

}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int num;
        scanf("%d", &num);
        int dev = num / 2;
        int rem = num % 2;

        binary(dev, rem);
        printf("%d",rem);
        printf("\n");
    }

    return 0;
}