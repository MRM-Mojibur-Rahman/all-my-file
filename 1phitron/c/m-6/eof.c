#include<stdio.h>
int main(){
    int x;
    //type-1


    // while (scanf("%d",&x))
    // {
    //     if (x==1999)
    //     {
    //         printf("Correct\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("Wrong\n");
    //     }
        
    // }

    //type-2

    for (; scanf("%d",&x); )
    {
        if (x==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
    
    return 0;
}