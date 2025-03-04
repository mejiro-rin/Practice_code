#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  map<char,int> mymap;
  for(const auto& ch:str){
    mymap[ch]++;
  }
  string max_key;
  int max_count=0;
  for(const auto& pair:mymap){
    if(max_count<pair.second){
      max_key=pair.first;
      max_count=pair.second;
    }
  }
  cout<<max_key<<"\n"<<max_count<<endl;
  return 0;
}