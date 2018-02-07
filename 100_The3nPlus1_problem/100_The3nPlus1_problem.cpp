#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	int count;
	int tempi;
	int final;
	
	while(scanf("%d%d",&i,&j)!=EOF)
	{
		final = 0;
		printf("%d %d ",i,j);
		for(i;i<=j;i++)
		{
			tempi = i;
			count = 0;
			do
			{
				//printf("%d ",tempi);
				if(tempi==1)
				{
					count++;
					//continue;
				}
				else if(tempi%2!=0)
				{
					tempi = tempi*3 + 1;
					count++;
				}
				else if (tempi%2==0)
				{
					tempi = tempi/2;
					count++;
				}	
			}while(tempi>1);
			
			//printf("\nfinal=%d || count=%d",final, count);
			
			if(final < count)
			{
				final = count;
			}	
		}
		
		printf("%d\n",final+1);
	}
	
	return 0;
}
