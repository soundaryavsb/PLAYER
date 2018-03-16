#include <stdio.h>

int main(void) {
	int i,j,count=0;
	char a[10],b[10];
	scanf("%s%s",a,b);
	for(i=0,j=0;a[i]!='\0'||b[i]!='\0';i++,j++)
	{
		if(a[i]!=b[j])
		{
			count++;
		}
	}
	if(count>=1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
