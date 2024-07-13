#include<bits/stdc++.h>
using namespace std;
int main(){
//vector< pair<int,int> >v;
pair<int,int> p;
p.first=1;
p.second=10;
pair<int,int>::iterator  lt;
for(lt=p.begin();lt!=p.end();lt++)
   cout<< *lt;
//cout<<p<<endl'
return 0;
}
