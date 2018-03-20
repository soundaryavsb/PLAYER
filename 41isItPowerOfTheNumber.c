#include <stdio.h>

int main(void) {
	int n,k,i,count=0;
	scanf("%d%d",&n,&k);
	if(n>k)
	{
		for(i=0;n>=k&&count==0;i++)
		{
			if(n%k==0)
			{
				n=n/k;
			}
			else
			{
			count++;
			}
	            }
	

	            if(count>0)
	            {
		   printf("no");
	            }
	            else
	            {
		   printf("yes");
		
	            }
	}           
		else
	{
		printf("no");
            }
	return 0;
}
