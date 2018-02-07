#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[505];
	
	int n;
	scanf("%d",&n);
	
	int total;
	for(total=0; total<n; total++)
	{
		int r;
		scanf("%d",&r);
		
		int cd;
		for(cd=0; cd<r; cd++)
		{
			scanf("%d", &x[cd]);
		}
		
		int i,j;
		int temp = 0;
		for(i=0; i<r; i++)
		{
			for(j=i;j<r;j++)
			{
				if(x[i]>x[j])
				{
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;
				}
			}
		}
				
		//function for MODE
		int medium=0;
		
		int sn=0;
		
		if(r%2!=0)
		{
			sn = (r+1)/2;
			medium = x[sn-1]; //number
		}
		else if(r%2==0)
		{
			medium = (x[(r/2)-1] + x[r/2])/2;
		}

		//Calculate Sum of D
		int D=0;
		for(i=0;i < r;i++)
		{
			D = D + abs(medium - x[i]); 
		}
		printf("%d",D);
		
		printf("\n");

	}
}
