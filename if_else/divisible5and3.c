#include<stdio.h>
int main(){
int x;
printf("enter number : ");
scanf("%d",&x);
if (x%5==0)
{
    printf("divisible by 5");
}
if (x%3==0)
{
    printf("divisible by 3");
}

    return 0;
}