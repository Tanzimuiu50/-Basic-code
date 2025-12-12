//তিন বাহু দিলে ত্রিভুজ বানানো যাবে কিনা?
//triangle inequality check
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&
       b+c>a&&
       c+a>b)
        printf("triangle is valid");
    else
        printf("not possible triangle");
}
