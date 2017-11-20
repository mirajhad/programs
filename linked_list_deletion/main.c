#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node *link;
};
struct node *start=NULL;
struct node *createnode()
{
    struct node *n;
    n=(struct node)malloc(sizeof(struct node*));
    return(n);

};
void deletenode()
{
    struct node *r;
    if(start==null)
        printf("empty");
    else
    {
        start=r;
        start=start->link;
        free(r);

    }
}
void viewlist()
{
    struct node *p;
    if(start=NULL)
        printf("list empty");
    else
    {
        p=start;
        while(p!=NULL)
        {
            printf("%d",&t->info);
            p=p->link;
        }
    }
}





