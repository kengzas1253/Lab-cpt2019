#include<stdio.h>
void replace_space(char *s,char c);
int main(){
	char str[100],c;
	printf("Enter: ");
	fgets(str, sizeof str, stdin);
	printf("Char: ");
	scanf("%c",&c);
	replace_space(str,c);
	printf("%s",str);
	return 0;
}
void replace_space(char *s,char c){
	
	while(*s)
	{   
	    if(*s == ' ')
	    {   *s = c;
		}
		s++;
	}

}
