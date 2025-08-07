#include<stdio.h>
int main(){
    int l,w;
    scanf("%d %d",&l,&w);
    int area = l*w;
    int paramitar = (l+w)*2;
    printf("%d %d\n",area,paramitar);
    return 0;
}