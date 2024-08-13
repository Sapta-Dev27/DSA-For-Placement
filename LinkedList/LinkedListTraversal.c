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
   return 0;
}