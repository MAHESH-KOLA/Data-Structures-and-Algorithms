#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
      int data;
      int prior;
      node *next;
      
      node()
      {
          data;
          prior;
          next=NULL;
      }
      node(int val,int pri)
      {
        data=val;
        prior=pri;
        next=NULL;   
      }
      
      node *head=NULL,*temp,*tail,*nn;

      bool empty()
      {
        return head==NULL;
      }

      int peek()
      {
        return head->data;
      }

      void enqueue(int val,int pri)
      {
        nn=new node(val,pri);
        if(head==NULL || head->prior > pri)
        {
          nn->next=head;
          head=nn;
        }
        else
        {
          temp=head;
          while(temp!=NULL and temp->prior<=pri)
          {
            temp=temp->next;
          }
          nn->next=temp->next;
          temp->next=nn;
        }
      }

      void dequeue()
      {
        if(empty())
        {
          cout<<"No nodes are present";
          return;
        }
          temp=head;
          head=head->next;
          cout<<temp->data<<" ";
          delete temp;
      }

      void display()
      {
        if(empty())
        {
          cout<<"No nodes are present";
          return;
        }
        temp=head;
        while(temp!=NULL)
        {
          cout<<temp->data<<" ";
          temp=temp->next;
        }
      }	
    
};

int main()
{
  node pq;
  vector<int> v= {1,2,3,4,5,6,7,8,9};
  cout<<pq.empty()<<endl;       //1
  for(auto &i: v)
  {
    pq.enqueue(i,v.size()+1-i);
    // cout<<i<<vc.size()+1-i; 
  }
  cout<<pq.empty()<<endl;     //0
  pq.display();
  cout<<endl<<pq.peek()<<endl;
  pq.dequeue();
  cout<<endl;
  pq.display();
}
