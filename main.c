#include <stdio.h>
#include <stdlib.h>

struct Stack
{
     int top;
     int capacity;
     int *array;
};

struct Stack *createStack(unsigned capacity)
{
     struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
     stack->top = -1;
     stack->capacity = capacity;
     stack->array = (int *)malloc(stack->capacity * sizeof(int));
     return stack;
}

int isFull(struct Stack *stack)
{
     return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack *stack)
{
     return stack->top == -1;
}

void push(struct Stack *stack, int item)
{
     if (isFull(stack))
     {
          return;
     }
     stack->array[++stack->top] = item;
     printf("%d pushed on stack.\n", item);
}

int pop(struct Stack *stack)
{
     if (isEmpty(stack))
     {
          return 1;
     }
     return stack->array[stack->top--];
}
int main()
{
     struct Stack *stack = createStack(100);
     push(stack, 10);
     push(stack, 20);
     push(stack, 30);
     for (size_t i = 0; i < 3; i++)
     {
          printf("%d\n", pop(stack));
     }

     return 0;
}