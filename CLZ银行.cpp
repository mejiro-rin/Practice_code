#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  queue<string> V,N;
  int m=0;cin>> m;
  for(m;m>0;m--){
    string op;cin>>op;
    if(op=="IN"){
      string name,q;
      cin>>name>>q;
      if(q=="V")V.push(name);
      else{N.push(name);}
    }
    else{
      string p;cin>>p;
      if(p=="V")V.pop();
      else{N.pop();}
    }
  }

  while(V.size()){
    cout<<V.front()<<endl;
    V.pop();
  }
  while(N.size()){
    cout<<N.front()<<endl;
    N.pop();
  }
  return 0;
}