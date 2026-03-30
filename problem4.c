//take float input and print the fractional part of the real number
#include<stdio.h>
int main(){
    float x;
    printf("enter a number :");
    scanf("%f",&x);
    int y;
    y=x;
    printf("the fractional part is %f",x-y); 
    return 0;
}