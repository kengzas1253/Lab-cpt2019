#include<stdio.h>
void to_next(char* c);
int main()
{
	char a;
	printf("Enter: ");
	scanf("%c",&a);
	if(a>='a' && a<='z')
	{   to_next(&a);
	     printf("%c",a);
	}
}
void to_next(char *c)
{
     if(*c=='z'){
     	*c='a';
	 }
     else if(*c!='z'){
     	(*c)++;
     }
}

