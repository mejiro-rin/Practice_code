#include <bits/stdc++.h>
using namespace std;

int main()
{
  int Sum=0;
  for(int i=1;i<=2024;++i){
    int temp=i;
    int sum_to=0,sum_fo=0;
    while(temp){
      sum_to+=temp%2;
      temp/=2;
    }
    temp=i;
    while(temp){
      sum_fo+=temp%4;
      temp/=4;
    }
    if(sum_to==sum_fo) Sum++;
  }
  cout<<Sum<<endl;
  return 0;
}