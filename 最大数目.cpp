#include <bits/stdc++.h>
using namespace std;
#define N 100000

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> T;
    for(int i=0;i<n;i++){
        cin>>a[i];
        T[a[i]]++;
        T[a[i]+1]++;
        T[a[i]-1]++;
    }
    int m=0;
    for(auto i:T){
        m=max(m,i.second);
    }
    cout<<m<<endl;
    return 0;
}