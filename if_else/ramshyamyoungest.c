#include <stdio.h>
int main()
{
    int Ram, Shyam, Ajay;
    printf("enter age of Ram : ");
    scanf("%d", &Ram);
    printf("enter age of Shyam : ");
    scanf("%d", &Shyam);
    printf("enter age of Ajay : ");
    scanf("%d", &Ajay);
    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is youngest");
    }
if (Shyam<Ram && Shyam<Ajay)
{
    printf("Shyam is youngest");
}
if (Ajay<Ram && Ajay<Shyam)
{
    printf("Ajay is youngest");
}

    return 0;
}