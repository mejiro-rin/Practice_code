#include <bits/stdc++.h>
using namespace std;

const int N=1e5;
int n,k;
int x[N],y[N];

int F(int mid){
  int sum=0;
  for(int i=0;i<k;++i){
    sum+=(x[i]/mid)*(y[i]/mid);
  }
  return sum;
}

int main()
{
  cin>>n>>k;
  for(int i=0;i<n;++i) cin>>x[i]>>y[i];
  int l=0,r=1e5;
  while(l+1<r){
    int mid=(l+r)/2;
    if(F(mid)>=k) l=mid;
    else r=mid;
  }
  cout<<l<<"\n";
  return 0;
}