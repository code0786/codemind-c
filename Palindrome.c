#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int rev=0,r,temp=a;
    while(temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp/=10;
    }
    if(rev==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}