#include<stdio.h> 
int main()
{   FILE *fp;     
    int a[10],i,sum=0; 
    if((fp = fopen("num.txt","r"))==NULL)
    {   printf("Can not open");
	}
	else
	{   for ( i = 0; i < 10; i++)
        {  fscanf(fp,"%d",&a[i]);
            sum=sum+a[i];
        }
        printf("sum = %d",sum);
        fclose(fp);	
	}
    return 0; 
}
