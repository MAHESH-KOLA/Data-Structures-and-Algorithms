#include<bits/stdc++.h>
using namespace std;

int main(){

deque<int> dq;
dq.push_front(1);
dq.push_front(2);
dq.push_back(3);
dq.push_back(4);
dq.push_front(5);
dq.push_front(6);
dq.push_back(7);
dq.push_back(8);

deque<int>::iterator lt;
for(lt=dq.begin();lt!=dq.end();lt++)
   cout<<*lt<<" ";
cout<<endl;
dq.pop_front();
dq.pop_back();
for(lt=dq.begin();lt!=dq.end(); lt++)
    cout<<*lt<<" ";
cout<<endl;
cout << "\ngquiz.size() : " << dq.size();
	cout << "\ngquiz.max_size() : " << dq.max_size();

	cout << "\ngquiz.at(2) : " << dq.at(2);
	cout << "\ngquiz.front() : " << dq.front();
	cout << "\ngquiz.back() : " << dq.back();

}
