#include<stdio.h>
int main(){
int x;
printf("enter a number : ");
scanf("%d",&x);
if (x>=100 && x<=999)
{
    printf("number is a 3 digit number");
}
if (x<100)
{
    printf("two digit number");
}
    return 0;
}