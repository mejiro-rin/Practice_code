#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// const int N=3e4+1;
vector<ll> a;

int main()
{
  int w,n;
  cin>>w;
  cin>>n;
  for(int i=0;i<n;++i){
    int temp;
    cin>>temp;
    a.push_back(temp);
  }
  sort(a.begin(),a.end());
  int sum=0;
  int op=0,ed=n-1;
  while(op<=ed){
    if(op==ed){
      sum++;
			break;
    }
    else if(a[op]+a[ed]<=w){
      sum++;
      op++;
      ed--;
    }
    else if(a[op]+a[ed]>w){
      sum++;
      ed--;
    }
  }
  cout<<sum<<endl;
  return 0;
}