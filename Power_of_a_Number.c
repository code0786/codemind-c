#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,M;
	scanf("%d%d%d",&x,&y,&M);
	x=pow(x,y);
	printf("%d",x%M);	
	
	return 0;
}