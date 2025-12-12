

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+b+c+d==360 && a>0 && b>0 && c>0&& d>0)
    {
       printf("Quadrilateral Validity");
    }
else
        printf("not possible triangle");
}
