#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int useable_lenth = n-1-k,useable_wide = m-2;
    int usable_area = useable_lenth*useable_wide;
    float room_area = (float)usable_area/k;
    printf("%.4f\n",room_area);

    return 0;
}