#include<stdio.h> 
#include<stdlib.h> 
struct set{     
    float factor;     
    int amount;     
    int *values; 
}; 
typedef struct set SET;  
struct v{     
    int k;     
    SET set; 
}; 
typedef struct v V; 
void input_v(V *p); 
int sum(int d[], int len); 
float f_v(V *p); 
  
int main(){     
    V v;     
    input_v(&v);
    printf("f = %.1f", f_v(&v)); 
    //free values here 
    return 0; 
}
void input_v(V *p){     
    int i,count=0,add;
    printf("k = ");   
    scanf("%d",&p->k);  
    printf("set.factor = ");
    scanf("%f",&p->set.factor);     
    printf("set.amount = ");
    scanf("%d",&p->set.amount); 
    //malloc your values here 
    p->set.values=malloc(5* sizeof(int));
    printf("set.values = ");
    for(i=0;i<5;i++){
        scanf("%d",&p->set.values[i]);
    }
     add=sum(p->set.values,count);
     p->set.amount=add;
     } 
 
int sum(int d[], int len){       
   int i;
   for(i=0;i<5;i++){
       len=len+d[i];
   }
   return len;
} 
float f_v(V *p){  
    return p->k+ (p->set.factor * p->set.amount);
} 
