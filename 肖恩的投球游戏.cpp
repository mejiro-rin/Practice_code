#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int mp[N][N],diff[N][N];

void F(int x1,int y1,int x2,int y2,int arr[][N],int x){
  for(int i=x1;i<=x2;++i){
    arr[i][y1]+=x;
    if(y2+1<=N){
      arr[i][y2+1]-=x;
    }
  }
}

int main(){
  int n,m,q;
  cin>>n>>m>>q;
  for(int i=1;i<=n;++i){
    mp[i][0]=0;
    for(int j=1;j<=m;++j){
      cin>>mp[i][j];
      diff[i][j]=mp[i][j]-mp[i][j-1];
    }
  }
  for(int k=1;k<=q;++k){  
    int x1,y1,x2,y2,c;
    cin>>x1>>y1>>x2>>y2>>c;
    F(x1,y1,x2,y2,diff,c);
  }
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      mp[i][j]=diff[i][j]+mp[i][j-1];
      cout<<mp[i][j]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}