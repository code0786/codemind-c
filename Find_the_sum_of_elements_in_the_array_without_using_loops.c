#include<stdio.h>

int main()
{
	int size,i,a[100],x=0;
	scanf("%d",&size);
	if(size>=1&&size<=30)
	{
		
			for(i=0;i<size;i++)
			{
				scanf("%d",&a[i]);
			}			
			for(i=0;i<size;i++)
			{
				x+=a[i];
			}
			printf("%d",x);	
					
	}
	else
	{
		printf("Enter a Valid Number");
	}

	
	return 0;
}

