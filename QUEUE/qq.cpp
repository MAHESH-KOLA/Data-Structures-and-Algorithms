//queue

#include<bits/stdc++.h>
using namespace std;

void display(queue <int> q){
 while(!q.empty()){
   cout<<q.front();
   q.pop();
   }
   cout<<endl;
   }


int main(){
queue <int> q;

q.push(1);
q.push(2);
q.push(3);
q.push(4);

display(q);
q.pop();
display(q);
cout<<q.front();
cout<<q.back();
}
