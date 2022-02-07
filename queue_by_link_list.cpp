#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
  public:
  int info;
  node *next;
};
node* creat(int data)
{
  node *ptr= new node;
  ptr->info=data; 
  return ptr;
}
void display(node *head)
{
  node *ptr=head->next;
  while(ptr!=NULL)
 {
  cout<<" "<<ptr->info;
  ptr=ptr->next;
 }
}
void enqueue(node *head,int data)
{
 node *ptr=head->next;
  while(ptr->next!=NULL)
 {
  ptr=ptr->next;
 }
  node *p1=creat(data);
  ptr->next=p1;
  p1->next=NULL;
}
void dequeue(node *head)
{
  head->next=head->next->next;
}
int main()
{
  cout<<"   ======queue_by_link_lst======"<<endl;
  cout<<endl<<endl;
  
  node *head,*p1,*p2,*p3;
  head= new node;
  p1=creat(10);
  p2=creat(20);
  p3=creat(30);
  
  head->next=p1;
  p1->next=p2;
  p2->next=p3;
  p3->next=NULL;
  display(head);

  cout<<endl<<endl;
  enqueue(head,99);
  
  cout<<"after insert data"<<endl; 

  cout<<endl<<endl;
  cout<<"after delete data"<<endl;
  cout<<endl<<endl;
  display(head);
 
 return 0;
}
