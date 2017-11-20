#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
struct arraystack
{
    int top;
    unsigned capacity;
    int *array;
};
struct arraystack* createstack(int cap)
{
    struct arraystack *stack;
    struct malloc(siseof(struct arraystack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int )*capacity);
    return(stack);
};
int isfull(struct arraystack *stack)
{
    if(stack->capacity==)
}
