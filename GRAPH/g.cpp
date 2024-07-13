#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int> adj[N];
int main(){
 for(int i=0;i<N;i++)
    vis[i]=0;
 int n,m;
 cin>>n>>m;
 int x,y;
 for(int i=0;i<m;i++){
  cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);
 }
 return 0;
 
 }
 
