#include<stdio.h>
int main()
{
   float a,b;
   char ope;
   printf("enter the number:\n");
   scanf("%f %c %f",&a,&ope,&b);
   if(ope=='+')
        printf("addition:%f\n",a+b);
   else if(ope=='-')
    printf("subtraction:%f\n",a-b);
   else if(ope=='*')
    printf("multiplication:%f\n",a*b);
   else if(ope=='/')
   {
       if(b!=0)
        printf("division:%f\n",a/b);
       else
        printf("not divisition\n");
   }
   else
    printf("invalid\n ");
}
