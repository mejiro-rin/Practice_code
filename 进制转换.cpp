
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N=100000;
int mp[N][2];
// int arr[N][N];
ll temp[N]={0};
string str[N];

int main()
{
  int T;
  cin>>T;
  for(int i=0;i<T;++i){
    cin>>mp[i][0]>>mp[i][1];
    cin>>str[i];
  }

  // for(int i=0;i<T;++i){
  //   for(int j=0;j<str[i].length();++j){
  //     if(str[i][j]>='0'&&str[i][j]<='9') arr[i][j]=str[i][j]-'0';
  //     else arr[i][j]=str[i][j]-'A'+10;
  //   }
  // }

  // for(int i=0;i<T;++i){
  //   for(int j=0;j<str[i].length();++j){
  //     temp[i]=temp[i]*mp[i][0]+arr[i][j];
  //   }
  // }

  for(int i=0;i<T;++i){
    for(int j=0;j<(int)str[i].length();++j){
      if(str[i][j]>='0'&&str[i][j]<='9') temp[i]=temp[i]*mp[i][0]+(str[i][j]-'0');
      else temp[i]=temp[i]*mp[i][0]+(str[i][j]-'A'+10);
    }
    
    string ans;
    int j=0;
    while(temp[i]){
      int key=temp[i]%mp[i][1];
      if(key>=10) ans.push_back(key-10+'A');
      else ans.push_back(key+'0');
      temp[i]/=mp[i][1];
      j++;
    }
    // int len=ans.length();
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
  }

  return 0;
}