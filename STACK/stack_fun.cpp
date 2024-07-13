#include<iostream>
#include<stack>
using namespace std;
#define MAX 10
int main(){
stack <int> a;
a.push(2);
a.push(3);
a.push(5); 
a.push(4); 
a.push(6);  
while(!a.empty()){
cout<< a.top()<<" ";
a.pop();
}
}
