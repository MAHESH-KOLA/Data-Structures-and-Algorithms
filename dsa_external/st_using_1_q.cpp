#include<bits/stdc++.h>
using namespace std;

class STACK{
queue<int> q;
public:
  void enque(int n){
     int l=q.size();
     q.push(n);
     for(int  i=0;i<l;i++){
      int f=q.front();
      q.pop();
      q.push(f);
      }
      }
   int deque(){
    int r=q.front();
    q.pop();
    return r;
    }   
  void upper(); 
   
};
int STACK::upper(){
    int r=q.front();
    return r;
   }

int main(){
  STACK s;
  s.enque(1);
  s.enque(2);
  s.enque(3);
  cout<<s.deque()<<endl;
  cout<<s.upper()<<endl;
  return 0;
}      
