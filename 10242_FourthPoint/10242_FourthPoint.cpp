#include <stdio.h>
int main()
{
	float x[4];
	float y[4];
	
	while(scanf("%f%f%f%f%f%f%f%f",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4])==8)
	{	
		//平行四邊形對邊對齊; 
		float ansX = x[0] - (x[1]-x[3]);
		float ansY = y[0] - (y[1]-y[3]);
		
		printf("%.3f %.3f",ansX,ansY);
		printf("\n");                   
	return 0;
}
