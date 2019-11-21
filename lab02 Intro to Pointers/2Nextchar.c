#include<stdio.h>
#include<string.h>
char* find_char(char s[],int c);
int main(){
	char str[128];
	char c;
	printf("S: ");
	scanf("%s",&str);
	printf("C: ");
	scanf(" %c",&c);
	if(c!=NULL)
	{   printf("= %c",*find_char(str,c));
	}
	return 0;
}
char* find_char(char s[],int c)
{    int i;
     for(i=0;i<strlen(s);i++)
	 {
	      if(s[i]==c)
	      return &s[i+1];
	 }
	return NULL;
}


