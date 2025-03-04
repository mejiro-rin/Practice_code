#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=1e5+9;
const ll P=1e9+7;
ll a[6][N],prefix[6][N];

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;++i){
    cin>>a[1][i];
  }
  
  for(int i=2;i<=5;++i){
    for(int j=1;j<=n;++j){
      a[i][j]=a[i-1][j]*a[1][j]%P;
    }
  }
  for(int i=1;i<=5;i++){
    for(int j=1;j<=n;++j){
      prefix[i][j]=(prefix[i][j-1]+a[i][j])%P;
    }
  }

  while(m--){
    int l,r,k;
    cin>>l>>r>>k;
    cout<<(prefix[k][r]-prefix[k][l-1]+P)%P<<endl;
  }

  return 0;
}