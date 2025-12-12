#include<stdio.h>
int main()
{
    char x;
    printf("Enter the valu:\n");
    scanf("%c",&x);
    if((x>='a' &&x<='z')|| (x>='A'&& x<='Z'))
        printf("Alphabet");
    else if(x>='0' && x<='9')
        printf("digit");
    else printf("special");

}
