//Program that will check whether a triangle is valid or not, when the three angles (angle value should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
//[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.]
//তিনটা কোণ দিয়ে ত্রিভুজ বানানো যাবে কিনা, সেটাই বের করতে হবে।
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the number:\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>0 && b>0 && c>0 &&(a+b+c)==180)
   {
       printf("triangle is valid");

   }
   else
    printf("not valid");
}
