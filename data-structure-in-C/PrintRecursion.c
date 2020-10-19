#include<stdio.h>
#include<stdlib.h>
#include"LinkedListPrototype.c"
void RecursivePrint(struct Node* temp)
{
  //whatif temp == NULL, add the exit recursive condition
  if(temp == NULL){
    return;
  }
  if(temp!= NULL)
  {
    printf(" %d",temp->data);
    RecursivePrint(temp->next);
  }
}
//1->2->3->4->NULL
void RecursivePrintReverse(struct Node* temp)
{
  if(temp == NULL){
    return;
  }
  if(temp != NULL){
    RecursivePrintReverse(temp->next);
    printf(" %d",temp->data);
  }
}
int main(int argc, char const *argv[]) {
  Insert(1);Insert(7);Insert(8);Insert(4);
  Print();
  RecursivePrint(head);
  printf("\nReverse Printing\n");
  RecursivePrintReverse(head);
  printf("\n");
  return 0;
}
