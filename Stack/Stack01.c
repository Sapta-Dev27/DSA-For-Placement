#include <stdio.h>
#include <stdlib.h>

struct Stack
{
  int top;
  int size;
  int *arr;
};

int IsEmpty(struct Stack *ptr)
{
  if (ptr->top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int IsFull(struct Stack *ptr)
{
  if (ptr->top == ptr->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void Push(struct Stack *ptr, int value)
{
  if (IsFull(ptr))
  {
    printf("Stack   Overflow Condition Occured \n");
  }
  else
  {
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}

int Pop(struct Stack *ptr)
{
  if (IsEmpty(ptr))
  {
    printf("Stack Underflow Condition Occured \n");
  }
  else
  {
    int value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
  }
}

int Peek(struct Stack *ptr, int i)
{
  int arrIndex = ptr->top - i + 1;
  if (arrIndex < 0)
  {
    printf("Invalid Position\n");
  }
  else
  {
    return ptr->arr[arrIndex];
  }
}

int main()
{
  struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
  printf("Enter the size of the array \n");
  int size_array;
  scanf("%d", &size_array);
  printf("The size of the stack is %d : \n", size_array);
  s->top = -1;
  s->size = size_array;
  s->arr = (int *)malloc(s->size * sizeof(int));
  int top_value_0, top_value_1, top_value_2, top_value_3, top_value_4, top_value_5;
  printf("Enter the value at the top value 0 : \n");
  scanf("%d", &top_value_0);
  printf("Enter the value at the top value 1 : \n");
  scanf("%d", &top_value_1);
  printf("Enter the value at the top value 2 : \n");
  scanf("%d", &top_value_2);
  printf("Enter the value at the top value 3 : \n");
  scanf("%d", &top_value_3);
  printf("Enter the value at the top value 4 : \n");
  scanf("%d", &top_value_4);
  printf("Enter the value at the top value 5 : \n");
  scanf("%d", &top_value_5);
  s->arr[0] = top_value_0;
  s->top++;
  s->arr[1] = top_value_1;
  s->top++;
  s->arr[2] = top_value_2;
  s->top++;
  s->arr[3] = top_value_3;
  s->top++;
  s->arr[4] = top_value_4;
  s->top++;
  s->arr[5] = top_value_5;
  s->top++;
 
  // checking whether the stack is Empty  //
  if (IsEmpty(s))
  {
    printf("Stack is Empty \n");
  }
  else
  {
    printf("Stack is Not Empty \n");
  }
  // checking whether the stack is Full //
  if (IsFull(s))
  {
    printf("Stack is Full \n");
  }
  else
  {
    printf("Stack is Not Full \n");
  }
  // pushing an Element in Stack //
  int val;
  printf("Enter the value to be pushed \n");
  scanf("%d", &val);
  Push(s, val);
  // checking whether the Element in Stack is Full after pushing //
  if (IsFull(s))
  {
    printf("Stack is Full \n");
  }
  else
  {
    printf("Stack is Not Full \n");
  }
  // poping an element from the stack //

  printf( "The element popped out is %d \n" , Pop(s));
  
  // Peek Operation in Stack //
  int j;
  for (j = 1; j <= s->top + 1; j++){
      printf("The value of the element at %d is %d \n" , j , Peek(s,j));
  }
    return 0;
}