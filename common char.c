#include <stdio.h>
int main(void)
{
  char s[10],s1[10];
  int i,count=0;
  scanf("%s%s",s,s1);
  for(i=0;s[i]!='\0' && s1[i]!='\0';i++)
  if(s[i]==s1[i])
  count++;
  if(count>0)
  printf("yes");
  else
  printf("no");
	return 0;
}
