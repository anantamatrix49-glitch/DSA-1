//take two integers as input a and b : a>b, and find the remainder when a is divided by b.
#include<stdio.h>
int main(){
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
int q=a/b;
int r=a-(q*b);
printf("the remainder when a is divided by b is %d",r);
    return 0;
}