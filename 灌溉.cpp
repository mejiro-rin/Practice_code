#include <bits/stdc++.h>
using namespace std;

const int N=101;
int n,m,t,r,c,k;
int od[N][N],nw[N][N]={0};

int main()
{
  cin>>n>>m;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>r>>c;
    nw[r-1][c-1]=9;
  }
  cin>>k;

  for(int ti=1;ti<=k;ti++){
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        od[i][j]=nw[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(od[i][j]==9){
          for(int _i=max(0,i-1);_i<=min(n,i+1);_i++){
            for(int _j=max(0,j-1);_j<=min(m,j+1);_j++){
              if((od[_i][_j]==0)&&((_i==max(0,i-1)&&(_j!=max(0,j-1)&&_j!=min(m,j+1)))||(_i==min(n,i+1)&&(_j!=max(0,j-1)&&_j!=min(m,j+1)))||(_i==i))){
                nw[_i][_j]=1;
              }
            }
          }
        }
      }
    }
  }

  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(nw[i][j]==1) ans++;
        // cout<<nw[i][j]<<" ";
    }
    // cout<<endl;
  }
  cout<<ans+t<<endl;
  return 0;
}