#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n,j=0,k=0;
  cin>>n;
  ll sum=0,_a=INT_MAX,_b=0;
  for(int i=0;i<n;++i){
    if(i%2==0){
      ll temp;
      cin>>temp;
			temp=abs(temp);
      sum+=temp;
			_a=min(_a,temp);
      j++;
    }
    else{
      ll temp;
      cin>>temp;
			temp=abs(temp);
      sum-=temp;
			_b=max(_b,temp);
      k++;
    }
  }
  if(_a<_b)sum+=2*(_b-_a);
	// cout<<_a<<' '<<_b<<endl;
  cout<<sum;
  return 0;
}