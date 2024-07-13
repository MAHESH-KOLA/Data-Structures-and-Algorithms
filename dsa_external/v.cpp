#include <bits/stdc++.h>
using namespace std;

int main(){
int v=5;
//vector<vector<int>> adj;
  vector<vector<int>> adj(v,vector<int>(v,0));
   
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      cout<<adj[i][j]<<" ";
     }
     cout<<endl;
     }
}

