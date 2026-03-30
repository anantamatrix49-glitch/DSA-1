#include<stdio.h>
int main(){
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    
    { x = x * (-1);}
    printf("the absolute value is : %d",x);
    
    return 0;
}