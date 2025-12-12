//ত্রিভুজটি Right-angled কিনা?
 //পিথাগোরাস সূত্র:
//a² + b² = c²

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a*a + b*b==c*c) || (b*b + c*c==a*a) || (a*a + c*c==b*b))
    {
        printf("this is  right angled");

    }
    else printf("not right angled");
}
