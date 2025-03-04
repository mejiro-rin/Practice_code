#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int N;
  cin>>N;
  vector<ll> arr,_arr;
  ll Min=1e9,Max=-1e9;
  int j=0;
  for(int i=0;i<N;++i){
    ll temp;
    cin>>temp;
    if(temp>=0){//正数
      arr.push_back(temp);
      Min=min(Min,temp);
      j++;
      }
    else {//负数
      _arr.push_back(temp);
      Max=max(Max,temp);
    }
  }
  int sum=0,i=0;
  for(;i<j;i++){
    sum+=arr[i];
  }
  if(!j%2){
    cout<<sum<<"\n";
    return 0;
  }
  if(Min+Max>0) cout<<sum+Max<<"\n";
  else cout<<sum-Min<<"\n";
  return 0;
}