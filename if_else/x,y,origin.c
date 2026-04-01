#include<stdio.h>
int main(){
double x,y;
printf("enter x : ");
scanf("%lf",&x);
printf("enter y : ");
scanf("%lf",&y);
if (x==0 && y==0)// point lies on x axis
{
    printf("origin pr hai");
}
else if (x==0)
{
    printf("lies on y axis");
}
else if (y==0)
{
    printf("lies on x axis");
}
else
{
    printf("no lies on x axis y axis ");
}


    return 0;
}