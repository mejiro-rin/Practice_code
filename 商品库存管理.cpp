#include <bits/stdc++.h>
using namespace std;

const int N = 3e5+1;
int mp[N][2],diff[N]={0};

void F(int x,int y,int arr[]){
  arr[x]+=1;
  arr[y+1]-=1;
}

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;++i){
    cin>>mp[i][0]>>mp[i][1];
    F(mp[i][0],mp[i][1],diff);
  }
  int arr[N]={0};
  for(int i=1;i<=n;++i){
    arr[i]=diff[i]+arr[i-1];
  }
  int sum=0;
  for(int i=1;i<=n;++i){
    if(arr[i]==0) sum++;
  }
  for(int i=1;i<=m;++i){
    int Sum=sum;
    for(int j=mp[i][0];j<=mp[i][1];++j) if(arr[j]==1) Sum++;
    cout<<Sum++<<endl;
  }
  return 0;
}