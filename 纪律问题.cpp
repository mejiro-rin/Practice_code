#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int M=1e5+3;

ll quick_power(ll base,ll power){
  ll res=1;
  while(power){
    if(power%2) res=(res*base)%M;
    power/=2;
    base=(base*base)%M;
  }
  return res%M;
}

int main()
{
  ll m,n;
  cin>>m>>n;
  ll all=quick_power(m,n)%M;
  ll num=m*quick_power(m-1,n-1)%M;
  int ans;
  if(all-num<0) ans=(all-num+M)%M;
  else ans=all-num;
  cout<<ans<<"\n";
  return 0;
}