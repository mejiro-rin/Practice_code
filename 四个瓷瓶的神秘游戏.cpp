#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main()
{
  ll T[4];
  for(int i=0;i<4;++i){
    cin>>T[i];
  }
  sort(T,T+4,less<ll>());
  ll a=T[0],b=T[1],num=T[3];
  while(a+b>1&&b>0){
    if(a>0){
      a--;
      b--;
      num+=2;
    }
    else if(a==0){
      a+=2;
      b--;
      num--;
    }
  }
  cout<<num<<"\n";
  return 0;
}