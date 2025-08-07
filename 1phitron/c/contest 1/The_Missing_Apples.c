#include<stdio.h>
int main(){
    int inital, given ,brought,now;
    scanf("%d %d %d",&inital,&given,&brought);
    now = inital + brought - given;
    printf("%d",now);

    return 0;
}