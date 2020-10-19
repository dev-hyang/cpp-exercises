#include<stdio.h>
#include<stdlib.h>
#include "LinkedListPrototype.c"
void Reverse(struct Node* temp)
{
   if(temp->next == NULL){
     //should change NULL to head?
     head = temp;
     return;
   }
   if(temp != NULL){
     Reverse(temp->next);
     //do something here
     //h->1->2->3->4<-NULL
     struct Node* temp2 = temp->next;
     temp2->next = temp;//
     temp->next = NULL;
   }

}

int main(int argc, char const *argv[]) {
  Insert(1);Insert(8);Insert(2);Insert(5);
  Print();
  printf("\n");
  Reverse(head);
  Print();
  return 0;
}
