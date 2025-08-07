#include<stdio.h>
void binary (int num,int dev , int rem ,int conunt){
    if (dev==0)
    {
        return;
    }
    
    if (conunt==0)
    {
        rem=num%2;
        dev=num/2;
        
    }
    else
    {
         rem=dev%2;
        dev=dev/2;
    }
    binary(num,dev,rem,conunt+1);
    printf("%d",rem);


}
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1; i <=t ; i++)
    {
        int num;
        scanf("%d",&num);
        int dev = 1;
        int rem = 1;
        binary(num,dev,rem,0);
        printf("\n");
    }
    
    return 0;
}