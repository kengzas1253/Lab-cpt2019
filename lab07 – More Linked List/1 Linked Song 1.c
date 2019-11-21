#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct song{
  char title[128];
  double duration;
};
typedef struct song Song;

struct listnode{
  Song s;
  struct listnode *next;
};
typedef struct listnode LN;

void insert(LN **hptr, Song *sp);
LN *find_tail(LN *head);
double sum_duration(LN *head);

int main(){
  int i;	
  Song buf;
  LN *head;
  head=NULL;
  for(i=0;i<5;i++){
  	printf("S%0d:",i+1);
	scanf("%s",buf.title);
	printf("= ");
	scanf("%lf",&buf.duration);
	insert(&head,&buf);
  }

  printf("=%.2f",sum_duration(head));
  return 0;
}

void insert(LN **hptr, Song *sp){
  	LN *new_node = (LN*)malloc(sizeof(LN));
	LN *tail;
	strcpy(new_node->s.title,sp->title);
	new_node->s.duration=sp->duration;
	new_node->next=NULL;
	tail=find_tail(*hptr);
	if(tail==NULL)
		*hptr=new_node;
	else
		tail->next=new_node;
}

LN *find_tail(LN *head){
  	LN *tail;
	if(head==NULL){
		return NULL;
    }
	tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	return tail;
}

double sum_duration(LN *head){
  	float count=0;
	while(head!=NULL){
		count= count+head->s.duration;
		head=head->next;
	}
	return count;
}
