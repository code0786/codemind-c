#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sq=a*a;
    int sum=0,r;
    while(sq>0)
    {
        r=sq%10;
        sum+=r;
        sq/=10;
    }
    if(a==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}