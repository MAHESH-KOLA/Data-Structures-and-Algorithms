#include<bits/stdc++.h>
using namespace std;

class STACK{
  public:
  queue<int> q;

  void insert(int n){
     int s=q.size();
     q.push(n);
     for(int i=0;i<s;i++){
       q.push(q.front());
       q.pop();
       } 
   } 
  int remove(){
  int n=q.front();
	q.pop();  
	return n;
  }
  void display(){
     
  
  }

};
int main(){
 STACK s;
 s.insert(1);
 s.insert(2);
 s.insert(3);

 cout<<s.remove();
 cout<<s.remove();
 cout<<s.remove();
// display();
}
