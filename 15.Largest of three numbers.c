//Largest of three numbers
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the random number:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("largest:%f",a);
        else
            printf("largest:%f",c);
    }

     else
     {
         if(b>c)
            printf("largest:%f",b);
         else
            printf("largest:%f",c);
     }

}
