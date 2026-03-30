#include<stdio.h>
int main(){
    int cp,sp,profit;
    printf("enter cp: ");   
    scanf("%d",&cp);
    printf("enter sp: ");
    scanf("%d",&sp);
    printf("%d",profit=sp-cp );
    if(sp>cp){
        printf("\n profit");
    }

    else{
        printf("\n loss");
    }
    return 0;
}