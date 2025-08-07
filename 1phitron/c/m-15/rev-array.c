#include<stdio.h>
void rev_array(int array[],int n){
    int i = 0,j = n-1;
    while (i<j)
    {
        int temp = array[i];
        array[i]= array[j];
        array[j]=temp;
        i++;
        j--;
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    rev_array(array,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}