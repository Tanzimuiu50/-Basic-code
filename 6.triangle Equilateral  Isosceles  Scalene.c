//ত্রিভুজটি Equilateral / Isosceles / Scalene কোনটা?

// তিনটি বাহুর ওপর ভিত্তি করে ধরতে হবে

//তিনটাই সমান → Equilateral

//দুটো সমান → Isosceles

//কোনটাই সমান না → Scalene


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the  number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b&& b==c)
        {
            printf("Equilateral triangle");
        }
        else if(a==b || b==c || c==a)
            printf("isosceles triangle");
        else printf("scalene triangle");

    }
    else
        printf("not possible ");
}
