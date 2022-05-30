#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int as=0,bs=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            as+=i;
        }
    }

for(i=1;i<b;i++)
{
    if(b%i==0)
    {
        bs+=i;
    }
    
}
if(as==b && bs==a)
{
printf("Amicable");
}
else
{
    printf("Not Amicable");
}
return 0;
}