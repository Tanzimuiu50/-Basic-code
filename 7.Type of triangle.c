
//Acute / Obtuse / Right Triangle নির্ণয়
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180 && a>0 && b>0 && c>0)
    {
        if(a==90 ||b==90 || c==90)
            printf("right triangle");
        else if(a<90 &&b<90 && c<90)
            printf("acute triangle");
        else
            printf("obtuse triangle ");

    }
else
        printf("not possible triangle");
}
