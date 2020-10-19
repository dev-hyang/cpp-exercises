struct Node {
  int data;
  struct Node* next;
};

struct Node* head; // global variable, can be accessed everywhere after the definition
void Insert(int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
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
