#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for (int i = 1; i <= test; i++)
    {
        int m1,m2,d;
        scanf("%d %d %d" ,&m1 ,&m2,&d);
        // printf("%d %d %d" ,m1 ,m2,d);
        if (m2!=0)
        {
            float work=(m1*d)/(m2+m1);
            int save=d-work;
            printf("%d",save);
        }
        else
        {
            
            printf("0");
        }
        
        
        printf("\n");
    }
    
    return 0;
}