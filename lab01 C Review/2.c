#include<stdio.h> 
int main(){
	int i,ans,num;
	printf("Ans: ");
	scanf("%d",&ans);
	for(i = 0; i < 10; i++){
		scanf("%d",&num);  
		printf("T%.2d:",i+1);
		if(ans==num)
		{	printf("Victory\n");
		    break;
	    }
		else if((ans-num<=3)&&(ans-num>=-3))
		{   printf("Too Close\n");
		}
		else if(ans-num<3)
		{   printf("Very large\n");
		}
		else
		{   printf("Very small\n");
		}
	}
	printf("Game Over\n");
	return 0;
}
