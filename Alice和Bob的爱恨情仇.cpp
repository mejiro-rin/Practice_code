// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n,k;
//   vector<int> a;
//   cin>>n>>k;
//   for(int i=0;i<n;++i){
//     int temp;
//     cin>>temp;
//     a.push_back(temp);
//   }
//   int per=0;
//   while(1){
//     auto max=max_element(a.begin(),a.end());
//     if(*max==0) break;
//     int m;
//     for(m=0;*max-pow(k,m)>0;++m){
//       if(k==1){
//         m=2;
//         break;
//       }
//     }
//     m--;
//     *max-=pow(k,m);
//     per++;
//   }
//   if(per%2==1) cout<<"Alice"<<endl;
//   else cout<<"Bob"<<endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    vector<int> a;
    cin>>n>>k;
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int xor_sum=0;
    for(auto& num:a){
        xor_sum^=num;
    }
    cout<<(xor_sum?"Alice":"Bob")<<endl;
    return 0;
}