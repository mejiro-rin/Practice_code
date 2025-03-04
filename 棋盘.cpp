#include <bits/stdc++.h>
using namespace std;

const int N = 2e3+1;
int mp[N][N]={0},diff[N][N]={0};

void F(int x1,int y1,int x2,int y2,int arr[][N]){
  for(int i=x1;i<=x2;++i){
    arr[i][y1]+=1;
    arr[i][y2+1]-=1;
  }
}

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;++i){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    F(x1,y1,x2,y2,diff);
  }
  for(int i=1;i<=n;++i){
    int a=0;
    for(int j=1;j<=n;++j){
      a+=diff[i][j];
      if(a%2==0) cout<<0;
      else cout<<1;
    }
    cout<<"\n";
  }
  return 0;
}