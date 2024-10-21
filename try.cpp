//Reverse a linked list 
Node *reversell(node *head)
{
  //use 3 pointers 
Node * prev = nullptr;
Node ^temp = head;
while(temp!=null)
{
Node *front = temp->next;
temp->next=prev;
prev=temp;
temp=front;
}
return prev;
}
