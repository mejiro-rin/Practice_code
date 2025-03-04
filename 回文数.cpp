#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
  int y=x%10*10;
  return y+x/10;
}

int main()
{
  int i=10;
  for(;i<100;++i){
    int j=reverse(i);
    if(i%10){
      cout<<i<<j<<"\n";
    }
    else{
      i=i*10;
      cout<<i+j<<"\n";
    }
  }
  return 0;
}