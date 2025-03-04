#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N=2e5;


int main()
{
  int t;cin>>t;
  for(int i=1;i<=t;++i){
    int n,k;
    cin>>n>>k;
    vector<int> a(N);
    a[0]=0;
    for(int j=1;j<=n;++j){
      cin>>a[i];
    }
    sort(a.begin(),a.end(),less<int>());
    ll prefix[N]={0};
    for(int j=1;j<=n;++j){
      prefix[i]=prefix[i-1]+a[i];
    }
    ll max_add=0;
    for(int j=0;j<k;j++){
      max_add=max(max_add,prefix[n-j]-prefix[(k-j)*2]);
      // if(max_add<prefix[n-j]-prefix[(k-j)*2]) max_add=prefix[n-j]-prefix[(k-j)*2];
    }
    cout<<max_add<<"\n";
  }
  return 0;
}