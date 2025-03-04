#include <bits/stdc++.h>
using namespace std;

using ll=long long int;
const ll M=1e9+7;

ll F(ll base,ll power){
  ll res=1;
  while(power){
    if(power&1) res=(res*base)%M;
    power/=2;
    base=(base*base)%M;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  ll a;
  cin>>a;
  cout<<F(2,a);
  return 0;
}