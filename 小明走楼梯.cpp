#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const ll m=1e9+7;
int n;
ll ans=0;

bool prime(int x){
  if(x<2) return 0;
  if(x<=3) return 1;
  if(x%2==0) return 0;
  for(int i=3;i*i<=x;i+=2)
    if(x%i==0) return 0;
  return 1;
}

int main()
{
  int n;
  cin>>n;
  vector<ll> dp(n+1,0);
  dp[1]=1;
  dp[2]=2;
  for(int i=3;i<=n;++i){
    if(prime(i-2)){
      dp[i]=dp[i-1]%m;
    }
    else{
      dp[i]=(dp[i-1]+dp[i-2])%m;
    }
  }
  cout<<dp[n]<<"\n";
  return 0;
}