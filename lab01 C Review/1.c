#include<stdio.h>
int main(){
	char c;
    while(1){
    printf("char: ");
    scanf("%c",&c);fflush(stdin); 	
    if(c>='a' && c<='z')
	{  printf("%d \n",c-96);
	}	
    else if(c>='A' && c<='C') 
	{   printf("%d \n",c-64);
	}	
    else
	  {  break;
	  }  	
	}
	return 0;
	
	
}
