#include <stdio.h>
int main(void) 
{
char h,word[30];
int i,count=0;
scanf("%c",&h);
scanf("%s",word);
for(i=0;word[i]!='\0';i++)
if(word[i]==h)
count++;
printf("%d",count);
return 0;
}
