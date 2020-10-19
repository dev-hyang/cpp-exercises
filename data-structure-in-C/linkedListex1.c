#include<stdlib.h>
#include<stdio.h>
struct Node {
  int data;
  struct Node* next;
};

struct Node* head; // global variable, can be accessed everywhere after the definition
void Insert(int x)
{
  struct Node* temp = (Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp;
}
void Print()
{
  struct Node* temp = head;
  while(temp!= NULL)
  {
    printf(" %d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main(int argc, char const *argv[]) {
  head = NULL;//empty list
  printf("How many numbers?\n");
  int n,i,x;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    printf("Enter the number is \n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  return 0;
}
