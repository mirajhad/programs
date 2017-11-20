#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
struct node
{
    int data;
    struct node *next;
};
struct node* createlist();
void display(struct node *last);
struct node* addtoempty(struct node *last,int value);
struct node* addtoend(struct node *last,int value);
struct node* addtostart(struct node *last,int value);
struct node* addafter(struct node *last,int value);
struct node* del(struct node *last,int value);
void display(struct node *last);
{
    struct node *t;
    if(last==null)
        printf("list is empty");
    else{
        t=last->next;
        printf("%d",t->data);
        do{
            printf("%d",t->data);
         t=t->next;
         }while(t!=last->next);
}

struct node* addtoend(struct node *last,int value){
struct node *n;
n=malloc(sizeof(struct node))
n->data=value;
n->next=last->next;
last->next=n;
return(last)
};
struct node* addtoempty(struct node *last,int value){
struct node *s;
s=malloc(sizeof(struct node));
s->data=value;
s=last;
last->next=last;
return(last)
};
struct node* addtoend(struct node *last,int value){
struct node *k;
k=malloc(sizeof(struct node));
k->data=value;
n->last=last->next;
last->next=k;
last=k;
return(last);
};
struct node* del(struct node *last,int value){

};
struct node* createlist(struct node * last){
printf("enter the value you want to enter");
scanf("%d",&n);
printf("enter the first data");
scanf("%d",&value);
last=addtoempty(last,value);
if(i=2;i<n;i++){
    printf("enter the data");
    scanf("%d",&value);
    last=addtoempty(last,value);
}
return(last);
};
