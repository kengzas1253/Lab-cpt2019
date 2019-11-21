#include<stdio.h>
char enc_char(char c);
int check_char(char c);
int main(){
	char a;
	while(a != EOF)
	{   a= getchar();
	    printf("%c",enc_char(a));
	}
	return 0;
}
int check_char(char c){
	if(c>='a' && c<='z')
	   return 1;
	else if(c>='A' && c<='Z')
	   return 0;
	else
	   return -1;   
}
char enc_char(char c){
	int cs= check_char(c);
	if(cs == 1)
	     return c+2;
	else if(cs == 0)
	     return c-1;
    else if(cs == -1)
	     return c;		      
}
