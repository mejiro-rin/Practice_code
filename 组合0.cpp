#include <bits/stdc++.h>
using namespace std;

using ll=long long;

// ll A(ll m,ll n){
//   ll res=1;
//   while(m--){
//     res*=n;
//     n--;
//   }
//   return res;
// }

// ll C(ll m,ll n){
//   return A(m,n)/A(m,m);
// }

// int main()
// {
//   int t;
//   cin>>t;
//   while(t--){
//     ll n,m;
//     cin>>n>>m;
//     ll num=C(m,n),sum=0;
//     while(num){
//       if(!(num%10)) sum++;
//       num/=10;
//     }
//     cout<<sum<<"\n";
//   }
//   return 0;
// }

// ll F(ll a,int x){
//   ll res=0;
//   while(a){
//     if(a%x==0){
//       a/=x;
//       res++;
//     }
//     else break;
//   }
//   return res;
// }

int count_f(int num,int x){
  int res=0;
  while(num>0){
    num/=x;
    res+=num;
  }
  return res;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    // ll up=A(m,n);
    // // int down=A(n,n);
    // ll _2=F(up,2)-F(down,2);
    // // ll _5=F(up,5)-F(down,5);
    // if(_2<=0||_5<=0) cout<<0<<"\n";
    // else cout<<min(_2,_5)<<"\n";
    int _2 = count_f(n, 2) - count_f(m, 2) - count_f(n-m, 2);
    int _5 = count_f(n, 5) - count_f(m, 5) - count_f(n-m, 5);
    cout<<min(_2,_5)<<"\n";
  }
  return 0;
}