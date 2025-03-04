#include <bits/stdc++.h>
using namespace std;
const int N =101;
int main()
{
  int mp[N][N],ans[N][N]={0};
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>mp[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mp[i][j]==1){
        ans[i][j]=9;
        for(int _i=max(0,i-1);_i<=min(n,i+1);_i++){
          for(int _j=max(0,j-1);_j<=min(m,j+1);_j++){
            if(!mp[_i][_j])ans[_i][_j]++;
          }
        }
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<ans[i][j]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}