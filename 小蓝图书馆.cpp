#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  map<string,int> N;
  for(int i=0;i<n;i++){
    string d;cin>>d;
    if(d=="add"){
      string book,name;
      cin>>book>>name;
      N[name]++;
    }
    else if(d=="find"){
      string author;
      cin>>author;
      cout<<N[author]<<endl;
    }
  }
  return 0;
}