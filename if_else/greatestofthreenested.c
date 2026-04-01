#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf(" %d",&c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d greatest", a);
        }
        else
        {
            printf("%d greatest", c);
        }
    }

    else
    {
        if (b > c)
        {
            printf("%d grestest", b);
        }
        else
        {
            printf("%d greatest", c);
        }
    }
    return 0;
}