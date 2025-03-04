#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  set<int> A;
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
      A.insert(i+1);
    }
  }
  for(int i=0;i<q;i++){
    int d;cin>>d;
    if(d==1){
      if(A.size()){
        int p=*(A.begin());
        cout<<p<<endl;
      }
      else cout<<-1<<endl;
    }
    else if(d==2){
      int y;
      cin>>y;
      y-=1;
      if(s[y]=='1'){
        s[y]='0';
        A.erase(y+1);
      }
      else{
        s[y]='1';
        A.insert(y+1);
      }
    }
  }
  return 0;
}