#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[50],m,s1[50],n;
	int i,count=0;
	scanf("%s%s",s,s1);
	m=strlen(s);
	n=strlen(s1);
	for(i=0;s[i]!='\0'&& s1[i]!='\0';i++)
	if(s[i]==s1[i])
	count++;
	if(count==m && count==n)
	printf("yes");
	else
	printf("no");
	return 0;
}
