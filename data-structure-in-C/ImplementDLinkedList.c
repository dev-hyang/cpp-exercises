#include<stdio.h>
#include<stdlib.h>
#include"DoublyLinkedList.c"
void InsertAtHead(int data)
{
  //new a node
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->prev = NULL;
  temp->next = NULL;
  temp->data = data;
  if(head == NULL){
    head = temp;
    tail = temp;
    return;
  }//
  // temp->prev = NULL;
  // temp->next = head;//need to init to NULL, ots, it will never get a next ->NULL
  // temp->data = data;
  temp->next = head;
  //create the then-1st element's relation
  head->prev = temp;
  //create head with the new-1st element's relation
  head = temp;
}

void InsertAtTail(int data)
{
  //new a Node
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->prev = NULL;
  temp->next = NULL;
  temp->data = data;
  //we can put above function to a new function called GetNewNode()
  if(tail == NULL){
    tail = temp;
    head = temp;
    return;
  }
  //create the new-last element's relationship
  temp->prev = tail;
  //create the then-last element's relationship
  tail->next = temp;
  //create the tail's relation
  tail = temp;

}

void Print()
{
  struct Node* temp = head;
  while(temp != NULL){
    printf(" %d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void ReversePrint()
{
  struct Node* temp = tail;
  while(temp != NULL){
    printf(" %d",temp->data);
    temp = temp->prev;
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  InsertAtHead(1);
  InsertAtHead(3);
  InsertAtHead(6);
  InsertAtHead(2);
  Print();
  printf("reverse printing\n");
  ReversePrint();
  InsertAtTail(9);
  InsertAtTail(8);
  InsertAtTail(5);
  printf("2: printing\n");
  Print();
  printf("2:reverse printing\n");
  ReversePrint();
  return 0;
}
