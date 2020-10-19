#include<stdlib.h>
#include<stdio.h>
struct Node {
  int data;
  struct Node* next;
};

struct Node* head;
void Insert(int n,int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;//init temp->next = NULL
  struct Node* temp2 = head;
  if(n == 1){
    temp->next = head;
    head = temp;
    return;
  }
  for(int i=0; i< n-2; i++){
    temp2 = temp2->next;//find the (n-1)th element
  }
  temp->next = temp2->next;//make the new element point to original Nth element
  temp2->next = temp;//make the (n-1)th element point to new element
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
int main(int argc, char const *argv[]) {
  /* code */
  printf("How many numbers will you insert\n");
  int n,pos,x;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
      printf("Enter your position, number\n");
      scanf("%d,%d",&pos,&x);
      Insert(pos,x);
      Print();
  }
  return 0;
}
