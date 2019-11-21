#include<stdio.h>
 #define LEN 5 
 int* max(int *a, int *b); 
 int main(){ 
     int d[LEN], i; 
     for(i = 0; i < LEN; i++){
          printf("N%02d: ", i + 1); 
          scanf("%d", &d[i]);
     }
     printf("Max = %d",* max(&d[0],&d[0]));
     return 0;
 }
 int* max(int *a, int *b){
  int i;
  for(i=0;i< LEN;i++)
  {   if(*(a+i)>*b)
       *b = *(a+i);        
  }
   return b;
 }
 
