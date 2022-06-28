#include<stdio.h>
int main()
{
    int n,m,rmax=0,cmax=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0,sum;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        if(rmax<sum)
        {
            rmax=sum;
        }
    }
    for(int j=0,sum,i=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        if(cmax<sum)
        {
            cmax=sum;
        }
    }
    if(cmax>rmax){
        printf("%d",cmax);
    }
    else{
        printf("%d",rmax);
    }
}