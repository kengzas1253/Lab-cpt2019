#include<stdio.h> 
#define LEN 5 
int* find_max(int *p, int *q);
int main()
{   int d[LEN], i;
    int *sort; 
    for(i = 0; i < LEN; i++)
    {   printf("N%02d: ", i + 1); 
        scanf("%d", &d[i]); 
    } 
    sort = find_max(&d[0],&d[LEN]);
    for(i = 0; i < LEN; i++)
    {   printf("%d: ", * (sort+i)); 
       
    } 
    return 0;
}
int* find_max(int *p, int *q)
{   int i,j;
    for(i = 0; i < LEN; i++)
    {  for(j = 0; j < LEN; ++j)
       if ( *(p+i) > *(p+j) )
       {    *q =  *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = *q;  
       }           
    }
    return p;
}
