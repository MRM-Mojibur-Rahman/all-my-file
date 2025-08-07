#include<stdio.h>
void pri(int i){
    if (i == 101)
    {
        return;

    }
    printf("%d\n",i);
    pri(i+1);
}
int main(){
    int i =1;
    pri(i);
    return 0;
}