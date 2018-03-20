#include <stdio.h>

int main(void) {
	int count=0,i;
	char a[20];
	scanf("%s",a);
	for(i=0;i<20&&a[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
