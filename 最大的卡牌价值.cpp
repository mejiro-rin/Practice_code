// #include <bits/stdc++.h>
// using namespace std;

// using ll=long long;
// const int N = 1e5+1;
// ll a[N]={0},b[N]={0};
// vector<pair<ll,int>>c;

// // void F(ll x, ll y) {
// //     ll temp = x;
// //     x = y;
// //     y = temp;
// // }

// int main()
// {
//   int n,k;
//   cin>>n>>k;
//   for(int i=1;i<=n;++i){
//     cin>>a[i];
//   }

//   for(int i=1;i<=n;++i){
//     cin>>b[i];
//     ll x=b[i]-a[i];
//     c.push_back({x,i});
//   }
 
// 	sort(c.begin(), c.end(), [](const pair<ll, int>& p1, const pair<ll, int>& p2) {
//     return p1.first > p2.first;
//   });
//   for(int i=0;i<k;++i){
//     swap(a[c[i].second],b[c[i].second]);
//     // F(a[c[i].second],b[c[i].second]);
//   }
//   ll sum=0;
//   for(int i=1;i<=n;++i){
//     sum+=a[i];
//   }
//   cout<<sum<<"\n";

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main()
{
  int n,k;
  cin>>n>>k;
	vector<ll> a(n),b(n),c(n);
  ll sum=0;
  for(int i=0;i<n;++i){
    cin>>a[i];
    sum+=a[i];
  }
  for(int i=0;i<n;++i){
    cin>>b[i];
    c[i]=b[i]-a[i];
  }
	sort(c.begin(), c.end(), greater<ll>());
	k=min(k,n);
  for(int i=0;i<k;++i){
    if(c[i]>0) sum+=c[i];
  }
  cout<<sum<<"\n";

  return 0;
}