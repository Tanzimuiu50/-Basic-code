//power of 2 like 2,4,8,16,32
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n>0)
    {
        if( (n&(n-1))==0)
            printf("yes power of 2");
        else
            printf("no power of 2");
    }
    else if(n==0)
        printf("Zero is not a valid input");
    else
        printf("Negative input is not valid");

}
