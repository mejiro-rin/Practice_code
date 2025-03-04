#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=2e5+1;
ll a[N]={0};

int main()
{
  int n,l,r;
  cin>>n>>l>>r;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1,a+1+n,less<ll>());
  int ans=0;
  for(int i=1;i<n;++i){
    int j=n;
    while(i<=j&&!(a[i]+a[j]<=r&&a[i]+a[j]>=l)){
      j--;
    }
    int Max=j;
    while(i<=j&&a[i]+a[j]<=r&&a[i]+a[j]>=l){
      j--;
    }
    ans+=Max-j;
  }
  cout<<ans<<"\n";
  return 0;
}