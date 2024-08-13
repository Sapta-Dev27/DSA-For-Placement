#include <stdio.h>
#include <stdlib.h>

struct Node { 
  int data ;
  struct Node *next;
};
//Traversal of the Link //
void LinkedListTraversal( struct Node *head ) { 
   struct Node * ptr = head ;
   while ( ptr !=NULL) { 
    printf( " Element is %d \n" , ptr -> data);
    ptr = ptr ->next ;
   }
}
//Insertion at the beginning //
struct Node * InsertAtStart( struct Node * head , int value){ 
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr -> data = value ;
     ptr -> next = head ;
     return ptr ;
}
//Insertion at a particular Index //

struct Node * InsertionAtIndex(struct Node* head , int index , int value ) { 
  struct Node * ptr = (struct Node*)malloc(sizeof(struct Node*));
  ptr ->data =  value ;
  struct Node *p = head ;
  int i=0 ;
  while ( i != index-1) {
    p = p -> next ;
    i++;
  }
  ptr -> next = p -> next ;
  p ->next = ptr ;
  return head;
}

//Insertion at a End //
struct Node *InsertAtEnd( struct Node* head, int value ) {
  struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
  struct Node* p = head ;
  while( p->next !=NULL) { 
    p=p->next ;
  }
  ptr->data = value ;
  ptr->next=NULL ;
  p->next = ptr ;
  return head;
}

//Insertion after a Particular Node //

struct Node *InsertAfter ( struct Node* head , struct Node* prev_node , int value ) {
  struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr -> data = value ;
  ptr -> next = prev_node -> next ;
  prev_node-> next = ptr ;
  return head;
}


int main() { 
    //creation of the nodes //
    struct Node *head ;
    struct Node *first ;
    struct Node *second ;
    struct Node *third ;
    struct Node *fourth;
   //allocating memory dynamically //
   head = (struct Node *)malloc(sizeof(struct Node));
   first = (struct Node *)malloc(sizeof(struct Node)) ;
   second = (struct Node *)malloc(sizeof(struct Node)) ;
   third = (struct Node *)malloc(sizeof(struct Node)) ;
   fourth = (struct Node *)malloc(sizeof(struct Node));
   //assigning values to the nodes // 
   int head_data , first_data , second_data , third_data , fourth_data ;
   printf( " Enter the data of the head node \n");
   scanf( "%d" , &head_data);
   printf( " Enter the data of the first node \n");
   scanf( "%d" , &first_data);
   printf( " Enter the data of the second node \n");
   scanf( "%d" , &second_data);
   printf( " Enter the data of the third node \n");
   scanf( "%d" , &third_data);
   printf( " Enter the data of the fourth node \n");
   scanf( "%d" , &fourth_data);
   //linking the nodes //
   head -> data = head_data ;
   head -> next = first ;
   //linking the first node with the second node //
   first -> data = first_data;
   first -> next = second ;
   //linking the second node with the third node //
   second -> data = second_data;
   second -> next = third ;
    //linking the third node with the fourth node //
    third -> data = third_data ;
    third -> next = fourth;
    // ending the linked list //
    fourth -> data = fourth_data ;
    fourth -> next = NULL ;
   //calling the fucntion //
   LinkedListTraversal( head);
   //insertion at the Beginning //
   int value ;
   printf( " Enter the element that is to be inserted \n");
   scanf(" %d", &value);
   head = InsertAtStart(head,value);
   printf("After Insertion at the Start \n");
   LinkedListTraversal(head);
   //insertion at the Given //
   int value_index , index ;
   printf( " Enter the element that is to be inserted \n");
   scanf(" %d", &value_index);
   printf( " Enter the index where element that is to be inserted \n");
   scanf(" %d", &index);
   head = InsertionAtIndex(head,index ,value_index);
   printf("After Insertion at the Start \n");
   LinkedListTraversal(head);
   //insertion at the End //
   int end_value ;
   printf( " Enter the element that is to be inserted \n");
   scanf(" %d", &end_value);
  
   head = InsertAtEnd(head,end_value);
   printf("After Insertion at the Start \n");
   LinkedListTraversal(head);

   //insertion after the node //
   int after_value ;
   printf( " Enter the element that is to be inserted \n");
   scanf(" %d", &after_value);
  
   head = InsertAfter(head,third,after_value);
   printf("After Insertion at the Start \n");
   LinkedListTraversal(head);

   return 0;
}