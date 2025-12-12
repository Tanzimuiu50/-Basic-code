
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the number:\n");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("x is getter then y");

    }
    else if(x>=y) printf("x is getter then or equal to y");
    else if(x<y) printf("x is less then to y");
    else if (x<=y) printf("x is less then or equal to y");
    else
        printf("not possible");
}
