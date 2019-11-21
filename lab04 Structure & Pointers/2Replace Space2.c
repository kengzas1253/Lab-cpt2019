#include<stdio.h>
#include<string.h>
char* find_space(char *s);
int main(){
	int i=0;
	char str[100],c,*cptr;
	printf("Enter: ");
	fgets(str, sizeof str, stdin);
	printf("Char: ");
	scanf("%c",&c);
	cptr=find_space(str);
	for(i=0;i< strlen(str);i++){
		if(str[i]== '_')
		 str[i]=c;
	}
	printf("%s",str);
	return 0;
}
char* find_space(char *s){
	while(*s)
	{   
	    if(*s == ' ')
	    {   *s = '_';
		}
		s++;
	}
    return s;
}
