#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node{
int info;
struct node *link;
};
struct node *start=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
};
void insert()
{
    struct node *temp,*t;
    temp=createnode();
    printf("enter value");
    scanf("%d",&temp->info);
    if(start==NULL)
        start=temp;
    else{
        t=start;
        while(t->link!=NULL)
            t=t->link;
    }

}
