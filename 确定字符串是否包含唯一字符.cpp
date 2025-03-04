#include <bits/stdc++.h>
using namespace std;

string str;
map<char,int> T;

int main()
{
  cin>>str;
  for(const char &temp:str){
    T[temp]++;
  }
  for(const auto &pair:T){
    if(pair.second>1){
      cout<<"NO"<<"\n";
      return 0;
    }
  }
  cout<<"YES"<<"\n";
  return 0;
}