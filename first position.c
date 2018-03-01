#include <stdio.h>
int main(void)
{
char h,word[30];
int i;
scanf("%c",&h);
scanf("%s",word);
for(i=0;word[i]!='\0';i++)
{
if(word[i]==h)
{
printf("%d",i);
break;
}
}
return 0;
}
