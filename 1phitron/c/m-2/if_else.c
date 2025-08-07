#include<stdio.h>
int main () {
    int age;
    printf("ENTER YOUR AGE");
    scanf("%d",&age);
    if (18<=age)
    {
        printf("YOU CAN ENTER THIS WEBSITE");
    }
    else {
        printf("YOU CAN'T ENTER THIS WEBSITE.GO BACK TURN ON VPN");
    }
    

    return 0;
}