#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<int,int,greater<int>> mp;
  int n,m;cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      int a;
      cin>>a;
      mp[a]++;
    }
  }
  for(auto& pair : mp){
    if(pair.second>(n*m/2)) cout<<pair.first;
  }
  return 0;
}