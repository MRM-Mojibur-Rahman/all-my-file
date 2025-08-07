#include<stdio.h>
int main(){
    int sec;
    scanf("%d",&sec);
    int hour,minite;
    hour = sec/3600;
    minite = (sec %3600)/60;
    sec = sec %60;
    printf("%d:%d:%d\n",hour,minite,sec);
    return 0;
}