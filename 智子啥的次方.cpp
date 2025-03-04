#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x;
    cin>>a>>b>>x;
    int z=1;
    int d=pow(10,x);
    for(int i=b;b>0;b--){
        z=(z*a)%d;
    }
    cout<<z<<endl;
    return 0;
}