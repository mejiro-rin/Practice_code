#include <bits/stdc++.h>
using namespace std;

using ll=long long;
// unordered_map<ll,ll> memo;

ll dfs(ll n,vector<ll> &dp){
	if(n<0) return -1;
	if(n==0) return 0;
	// if(memo.count(n)) return memo[n];
	if(dp[n]!=-2) return dp[n];
	int res=-1;
	int try3=dfs(n-3,dp);
	int try5=dfs(n-5,dp);
	if(try3!=-1) res=try3+1;
	if(try5!=-1&&(try5+1<res)) res=try5+1;
	// memo[n]=res;
	dp[n]=res;
	return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		ll n;
		vector<ll> dp(n+1,-2);
		cin>>n;
		// memo.clear();
		int ans=dfs(n,dp);
		cout<<ans<<endl;
	}
	return 0;
}