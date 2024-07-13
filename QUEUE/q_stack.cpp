#include<bits/stdc++.h>
using namespace std;

struct node{
  stack<int> s1,s2;
  void enQueue(int val){
    while(!s1.empty()){
     s2.push(s1.top());
     s1.pop();
     }
     s2.push(val);
     while(!s2.empty()){
     s1.push(s2.top());
     s2.pop();
     }
    }
    
    int deQueue(){
    if(s1.empty()){
       cout<<"under flow";
       return 0;
       }
     int x=s1.top();
     s1.pop();
     return x;
     }
   };
 
int main(){
   node st;
   st.enQueue(1);
   st.enQueue(2);
   st.enQueue(3);
   cout<< st.deQueue()<<endl;
     cout<< st.deQueue()<<endl;
       st.enQueue(4);
   st.enQueue(5);
   st.enQueue(6);
    cout<< st.deQueue()<<endl;
     cout<< st.deQueue()<<endl;
     
     while(!st.s1.empty()){
     cout<<st.s1.top()<<" ";
     st.s1.pop();
     }
     cout<< st.deQueue()<<endl;
   return 0;
   }
     
