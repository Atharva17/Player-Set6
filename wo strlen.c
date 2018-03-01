#include <stdio.h>
int main(void)
{
	char str[50];
	int i,count=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	count++;
	printf("%d",count);
	return 0;
}
