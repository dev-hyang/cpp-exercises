#include <iostream>
using namespace std;

class MLinkedList
{
  //Node* head;
  class Node
  {

  public:
    int value;
    Node* next;

    Node(int i);
    Node(const Node& node);//copy constructor do nothing, don't copy bcz pointers
    ~Node();
    //Node& operator=(const Node& node);//do nothing, don't copy bcz pointers
  };
  Node* head;
public:
  MLinkedList();
  MLinkedList(const MLinkedList& mll);
  MLinkedList& insertNodeAtLast(int i);
  //MLinkedList& deleteAtLast();
  void deleteAtLast();
  void display();
  ~MLinkedList();
  //MLinkedList& operator=(const MLinkedList& mll);
};

MLinkedList::Node::Node(int i)
  :next(NULL)
{
  cout<<"Node constructor is called"<<endl;
  value = i;
}

MLinkedList::Node::Node(const Node& node)
{
  //do nothing
}

MLinkedList::Node::~Node()
{
  cout<<"Node destructor is called"<<endl;
}


MLinkedList::MLinkedList()
{
  head = NULL;
}

//copy constructor-later implementation
// MLinkedList::MLinkedList(const MLinkedList& mll)
// {
//   if (mll.head)//if true
//   {
//     while((mll.head)->next != NULL)
//     {
//       Node* temp = new Node();
//       temp->next = (mll.head)->next;
//       temp->value = (mll.head)->value;
//       head = temp;
//     }
//   }
// }

MLinkedList& MLinkedList::insertNodeAtLast(int i)
{
  if(head == NULL)
  {
    //Node* temp = Node(i);//illegal because lhs is a Node pointer whilist rhs is a Node obj
    Node* temp = new Node(i);
    head = temp;
  }
  else
  {
    //this is pointer assignment, not copy constructor
    Node* temp = head;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new Node(i);
  }
  return *this;
}

void MLinkedList::display()
{
  Node* temp = head;
  while (temp != NULL) {
    cout<<temp->value<<",";
    temp = temp->next;
  }
}
void MLinkedList::deleteAtLast()
{
  //only one Node in list
  if(head->next == NULL)
  {
    delete head;
    head = NULL;
  }
  else
  {
    //add another pointer to represent prev
    Node* curr = head;
    Node* prev = head;
    while(curr->next != NULL)
    {
      prev = curr;
      curr = curr->next;
    }
    prev->next = NULL;//last (n-1)th node point to NULL
    delete curr;//delete nth node
  }
}
//need to program-defined
MLinkedList::~MLinkedList()
{
  while(head != NULL)
  {
    deleteAtLast();
  }

}

int main(int argc, char const *argv[]) {
  MLinkedList m;
  m.insertNodeAtLast(1);
  m.insertNodeAtLast(2);
  m.display();
  return 0;
}
