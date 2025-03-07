#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  ll n,k;
  cin>>n>>k;
  ll arr[n];
  for(ll i=0;i<n;i++) cin>>arr[i];
  ll ans=0;
  for(ll i=0;i<n-1;i++){
    ll _max=arr[i],_min=arr[i];
    for(ll j=i+1;j<n;j++){
      _max=max(_max,arr[j]);
      _min=min(_min,arr[j]);
      if(_max-_min>k){
        break;
      }
      ans++;
    }
  }
  cout<<ans<<"\n";
  return 0;
}