#include <stdio.h>
int main()
{
	int a=0,b=0;
	int count;
	int tempA, tempB;
	int ans;
	
	while(1)
	{
		ans = 0;
		count = 0;
		
		scanf("%d%d",&a,&b);
		if((a==0)&&(b==0))
		{
			break;
		}
		
		while( (a>0) || (b>0) )
		{
			tempA = a % 10;
			tempB = b % 10;
			
			if(tempA+tempB+count>=10)
			{
				count=1;
				ans++;
			}
			else
			{
				count=0;
			}
			
			a = a / 10;
			b = b / 10;
			
		}
		printf("%d",ans);
		printf("\n");
	}
	
	return 0;
}
