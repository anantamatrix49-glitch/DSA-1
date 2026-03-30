#include<stdio.h>
int main(){
int l,b;
printf("enter l : ");
scanf("%d",&l);
printf("enter b : ");
scanf("%d",&b);
int a = l* b;
int p = 2 * ( l + b);
if (a>p){
    printf("area is greater than perimeter")
}
    return 0;
}