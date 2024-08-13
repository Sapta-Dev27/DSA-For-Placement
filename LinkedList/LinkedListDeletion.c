#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
// Traversal of the Link //
void LinkedListTraversal(struct Node *head)
{
  struct Node *ptr = head;
  while (ptr != NULL)
  {
    printf(" Element is %d \n", ptr->data);
    ptr = ptr->next;
  }
}

// deleting the first node //
struct Node *DeleteAtStart(struct Node *head)
{
  struct Node *p = head;
  head = head->next;
  free(p);
  return head;
}

// deleting the node from a particular node //
struct Node *DeleteAtIndex(struct Node *head, int index)
{
  struct Node *ptr = head;
  struct Node *q = head->next;
  int i;
  for (i = 0; i < index - 1; i++)
  {
    ptr = ptr->next;
    q = q->next;
  }
  ptr->next = q->next;
  free(q);
  return head;
}

// deleting the Node from the end //
struct Node *DeleteAtEnd(struct Node *head)
{
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }
  p->next = NULL;
  free(q);
  return head;
}

// deleting the Node after a particular value //

struct Node *DeleteAtValue(struct Node *head, int value)
{
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->data != value && q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }
  if (q->data == value)
  {
    p->next = q->next;
    free(q);
  }
  return head;
}

int main()
{
  // creation of the nodes //
  struct Node *head;
  struct Node *first;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  // allocating memory dynamically //
  head = (struct Node *)malloc(sizeof(struct Node));
  first = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  // assigning values to the nodes //
  int head_data, first_data, second_data, third_data, fourth_data;
  printf(" Enter the data of the head node \n");
  scanf("%d", &head_data);
  printf(" Enter the data of the first node \n");
  scanf("%d", &first_data);
  printf(" Enter the data of the second node \n");
  scanf("%d", &second_data);
  printf(" Enter the data of the third node \n");
  scanf("%d", &third_data);
  printf(" Enter the data of the fourth node \n");
  scanf("%d", &fourth_data);
  // linking the nodes //
  head->data = head_data;
  head->next = first;
  // linking the first node with the second node //
  first->data = first_data;
  first->next = second;
  // linking the second node with the third node //
  second->data = second_data;
  second->next = third;
  // linking the third node with the fourth node //
  third->data = third_data;
  third->next = fourth;
  // ending the linked list //
  fourth->data = fourth_data;
  fourth->next = NULL;
  // calling the fucntion //
  LinkedListTraversal(head);

  // Deleting the first element //
  head = DeleteAtStart(head);
  printf("After deletion \n");
  LinkedListTraversal(head);
  // Deleting the  element at a particular Index //
  int index;
  printf("Enter the index where the element is to be deleted \n");
  scanf("%d", &index);
  head = DeleteAtIndex(head, index);
  printf("After deletion \n");
  LinkedListTraversal(head);
  // Deleting the Last element //
  head = DeleteAtEnd(head);
  printf("After deletion \n");
  LinkedListTraversal(head);
  // Deleting the  element at a particular Value //

  int value_deleted;
  printf("Enter the value  of the element is to be deleted \n");
  scanf("%d", &value_deleted);
  head = DeleteAtValue(head, value_deleted);
  printf("After deletion \n");
  LinkedListTraversal(head);
  return 0;
}