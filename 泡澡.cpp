#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M=2e5;
ll a[M],diff[M];

void F(ll x,ll y,ll z,ll arr[]){
  arr[x]+=z;
  arr[y]-=z;
}

int main()
{
  ll N,W;
  cin>>N>>W;
  diff[0]=0;
  for(int i=0;i<N;++i){
    ll s,t,p;
    cin>>s>>t>>p;
    F(s,t,p,diff);
  }
  for(int i=0;i<M;++i){
    if(i) {
      a[i]=diff[i]+a[i-1];
    }
    else {
      a[i]=diff[i];
    }
    // a[i]=diff[i]+a[i-1];
    if(a[i]>W){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  return 0;
}