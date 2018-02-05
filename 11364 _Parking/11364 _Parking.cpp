#include <stdio.h>
int main()
{
	int t;
	int x[100];
	scanf("%d",&t);
	
	for(int cd1=1;cd1<=t;cd1++)
	{
		int n;
		scanf("%d",&n);
		
		for(int cd2=0;cd2<n;cd2++)
		{
			scanf("%d",&x[cd2]);
			//printf("%d ",x[cd2]);
		}
		
		//printf("\n");
		int temp = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(x[i]>x[j])
				{
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;
				}
			}
		}
		
		int ans = (x[n-1]-x[0])*2;
		printf("%d",ans);
		
		printf("\n");
		
	}

	return 0;	
} 
