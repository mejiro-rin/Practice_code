#include <bits/stdc++.h>
using namespace std;

const int N=1000;
int mp[N];
vector<vector<int>> arr;

int main()
{
  int t;cin>>t;
  arr.resize(t);
  for(int i=0;i<t;++i){
    cin>>mp[i];
    // int n;cin>>n;
    for(int j=0;j<mp[i];++j){
      int temp;cin>>temp;
      arr[i].push_back(temp);
    }
    sort(arr[i].begin(),arr[i].end(),less<int>());
  }
  for(int i=0;i<t;++i){
    int sum=0,zero=0;
    while(1){
      auto it=find(arr[i].begin(),arr[i].end(),zero);
      if(it!=arr[i].end()){
        *it+=1;
        sum++;
      }
      else break;
    }
    int add=0;
    for(const auto& num:arr[i]){
      add+=num;
    }
    if(add==0){
      sum++;
    }
    cout<<sum<<endl;
  }
  return 0;
}