#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int val;
  node* next;
};
node* head;
void insertb()
{
  node* ptr=new node();;
  int v;
  if(ptr==NULL)
  cout<<"Overflow"<<endl;
  else
  {
    cout<<"Enter element:-";
    cin>>v;
    ptr->val=v;
    if(head==NULL)
    {
      head=ptr;
      ptr->next=head;
    }
    else
    {
      node* temp=head;
      while(temp->next!=head)
      temp=temp->next;
      temp->next=ptr;
      ptr->next=head;
      head=ptr;
    }
  }
}
void insertm()
{
  node* ptr;
  ptr=new node();
  if(ptr==NULL)
  cout<<"Overflow"<<endl;
  else
  {
    int length,count=1;
    cout<<"Enter length-";
    cin>>length;
    int v;
    cout<<"Enter value-";
    cin>>v;
    ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
      count++;
      if(count==length)
      break;
    }node* temp=ptr->next;
    ptr->next=new node();
    ptr=ptr->next;
    ptr->val=v;
    ptr->next=temp;
  }
}
void inserte()
{
  node* ptr=new node();
  if(ptr==NULL)
  cout<<"Overflow"<<endl;
  else
  {
    int v;
    cout<<"Enter value-";
    cin>>v;
    ptr=head;
    while(ptr->next!=head)
    ptr=ptr->next;
    ptr->next=new node();
    ptr=ptr->next;
    ptr->val=v;
    ptr->next=head;
  }
}
void deletb()
{
  node* ptr=new node();
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else if(head->next==head)
  {
    head=NULL;
    free(head);
  }
  else
  {
    ptr=head;
    while(ptr->next!=head)
    ptr=ptr->next;
    ptr->next=head->next;
    free(head);
    head=ptr->next;
  }
}
void deletm()
{
  node* ptr=new node();
  int length;
  cout<<"Enter length-";
  cin>>length;
  ptr=head;
  for(int i=0;i<length-1;i++)
  ptr=ptr->next;
  node* temp=ptr->next;
  ptr->next=temp->next;
  free(temp);
}
void deletee()
{
  node* ptr=new node();
  if(head==NULL)
  cout<<"Underflow"<<endl;
  ptr=head;
  while(ptr->next->next!=head)
  ptr=ptr->next;
  node* temp=ptr->next;
  ptr->next=head;
  ptr=temp;
  free(ptr);
}
void search()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  int v;
  cout<<"Enter value to be searched-";
  cin>>v;
  node* ptr=new node();
  ptr=head;
  int idx=0;
  while(ptr->next!=head)
  {
    idx++;
    if(ptr->val==v)
    break;
    ptr=ptr->next;
  }
  if(idx==0&&head->val!=v)
  cout<<"NOT FOUND"<<endl;
  else
  cout<<"FOUND AT "<<idx<<endl;
}
void display()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  node* temp=head;
  while(temp->next!=head)
  {
    cout<<temp->val<<"->";
    temp=temp->next;
  }
  cout<<temp->val<<"->"<<head->val<<endl;
}
int main()
{
  int choice=0;
  cout<<"Press 1-insert at beggining\nPress 2-insert at middle\nPress 3-insert at end\nPress 4-delet from beggining\nPress 5-delet from middle\nPress 6-delet from end\nPress 7-sort ascending\nPress 8-sort descending\nPress 9-search\nPress 10-reverse\nPress 11-display\nPress 12 for exit\n";
  while(choice!=12)
  {
    cout<<"Enter choice-";
    cin>>choice;
    switch(choice)
    {
      case 1:
      insertb();
      break;
      case 2:
      insertm();
      break;
      case 3:
      inserte();
      break;
      case 4:
      deletb();
      break;
      case 5:
      deletm();
      break;
      case 6:
      deletee();
      break;
      case 9:
      search();
      break;
      case 11:
      display();
      break;
    }
  }
}
