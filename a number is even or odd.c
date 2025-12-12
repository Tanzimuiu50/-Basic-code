//2 a number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n % 2 == 0)
    {
        printf("even number");

    }
    else
        printf("odd number");
}
