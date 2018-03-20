#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],i,f=0,s=0,sm;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>f)
		{
			f=a[i];
		}
	}
		for(i=0;i<n;i++)
	{
		if(a[i]<f)
		{
			sm=a[i];
			f=sm;
			                            
		}
	}
	
		for(i=0;i<n;i++)
	{
		if(a[i]>s)
		{
			s=a[i];
		}
	}
	 for(i=0;i<n;i++)
            {
            	if(a[i]<s&&a[i]!=sm)
            	{
            		s=a[i];
            	}
            }
	printf("%d is the second smallest number",s);
	return 0;
}
