#include "stdlib.h"
#include<stdio.h>
#include"LinkedListPrototype.c"
void Reverse()
{
  // struct Node* prev=head;//init prev should be NULL
  //struct Node* current = prev->next;
  struct Node* prev=NULL;
  struct Node* current = head;//init value

  struct Node* next = NULL;
  while(current != NULL){
    next = current->next;
    current->next = prev;
    //temp->next = NULL:
    prev = current;
    current = next;
  }
  head = prev;
//h->1->2->3->4
//prev:1,current:2,
//  next:3
//  2->1
//  prev:2, current:3
//  h->1<-2x3->4
//prev:2,current:3
//  next:4
//  3->2
//  prev:3,current:4
//  h->1<-2<
//h->1<-2<-3x4
//  next:NULL
//  4->3
//  prev:4,current:NULL
// h->1<-2<-3<-4

}
int main(int argc, char const *argv[]) {
  /* code */
  Insert(1);Insert(5);Insert(6);Insert(8);Insert(3);
  Print();
  Reverse();
  Print();
  return 0;
}
