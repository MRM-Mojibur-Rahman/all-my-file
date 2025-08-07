#include<stdio.h>
#include<math.h>
int main(){
    char string[2] ;
    scanf("%lld",&num);
    
    long long int dev=num,rem;
    long long int even=0,odd=0;
   for (int i = 1;dev!=0;i++)
    {
        
        rem=dev%10;
        dev= dev/10;
        if (i%2==0)
        {
            even+=rem;
        }
        else
        {
            odd+=rem;
        }
    }
    long long int ans = odd-even;
    ans= fabs(ans);

    
    
    if (ans%11==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
//     return 0;
}