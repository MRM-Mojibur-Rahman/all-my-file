#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    int even=0,odd=0,positive=0,negetive=0;
    for (int i = 1; i <=test; i++)
    {
        int num ;
        scanf("%d",&num);
        if (num==0)
        {
            even++;
        }
        
        else if (num>0)
        {
            if (num%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            
            positive++;
        }
        else
        {
            if (num%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            
            negetive++;
        }
        
        
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negetive);
    
    return 0;
}