#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    double avg=(sum*1.0)/a;
    printf("%.2lf",avg);
    return 0;
}