#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[50],m,str1[50],n;
	int i,count=0;
	scanf("%s%s",str,str1);
	m=strlen(str);
	n=strlen(str1);
	for(i=0;str[i]!='\0'&& str1[i]!='\0';i++)
	if(str[i]==str1[i])
	count++;
	if(count==m && count==n)
	printf("yes");
	else
	printf("no");
	return 0;
}
