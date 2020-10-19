#include<stdlib.h>
#include<stdio.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head = NULL;
void Insert(int data)//insert at first pos
{
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = head;
  head = temp;
}
void Print()
{
  struct Node* temp = head;
  while(temp !=NULL){
    printf(" %d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
void Delete(int n)
{
  struct Node* temp = head;
  if(head == NULL){
    printf("This is a empty list.Please Insert first.");
    return;
  }
  if(n==1){
    head = temp->next;//dangerous because forget to free memory
    free(temp);
    return;
  }
  for(int i = 0; i < n-2;i++){
    temp = temp->next;//find the (n-1)th element
  }
  struct Node* current =temp->next;//this will be nth element
  temp->next = current->next;//dangerous because forget to free memory
  free(current);
}
int main(int argc, char const *argv[]) {
  Insert(2);
  Insert(5);
  Insert(7);
  Insert(3);
  Print();
  int pos;
  printf("Which pos do you want to delete\n");
  scanf("%d", &pos);
  Delete(pos);
  Print();
  return 0;
}
