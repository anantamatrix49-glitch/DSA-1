// three digit number is input through the keyboard. Write a program to calculate the sum of its digits.
#include<stdio.h>
int main()
{
   int p,q,r;
   printf("enter the value of p,q,r");
   scanf("%d%d%d",&p,&q,&r);
   int sum;
   sum = p+q+r;
   printf("the sum of digits is %d",sum);
    return 0;
}