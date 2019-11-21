#include <stdio.h> 
#include<stdlib.h>
struct employee {   
    char name[128];   
    float salary; 
    }; 
typedef struct employee Employee; 
float total_salary(Employee all[], int len); 
int main() 
{   int num,i; //number of employees   
    Employee *all;   FILE *fp;      
    printf("Number: ");
    scanf("%d",&num);
    fp=fopen("employee.bin","wb");
    all = (Employee *)malloc(num * sizeof(Employee));
    for ( i = 0; i < num; i++)
    {   printf("Enter name: ");
        scanf("%s",all[i].name);
        printf("Enter salary: ");
        scanf("%f",&all[i].salary);
        fwrite(&all,sizeof(all),1,fp);
    }
    fclose(fp);
    fp=fopen("employee.bin","rb");
    for ( i = 0; i < num; i++)
    {   printf("%s %.2f \n",all[i].name,all[i].salary);
    }
    printf("=%.1f\n", total_salary(all, num)); 
    free(all);
    fclose(fp);  
    return 0;  
}
float total_salary(Employee all[], int len){
   int i,sum=0;
   for ( i = 0; i < len; i++)
   {   sum=sum+all[i].salary;
   }
   return sum;
}
