#include <bits/stdc++.h>
using namespace std;

bool F(int a){
  while(a){
    int x=a%10;
    if(x==2||x==0||x==1||x==9) return 1;
    a/=10;
  }
  return 0;
}

int main()
{
  int n;cin>>n;
  int sum=0;
  for(int i=1;i<=n;i++){
    if(F(i))sum+=i;
  }
  cout<<sum;
  return 0;
}