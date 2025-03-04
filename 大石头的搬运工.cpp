#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;
const int N = 1e5 + 10;

int n;
PII a[N];
ll lf[N],ri[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a+1,a+1+n);
    lf[0]=0,ri[0]=0;
    ll G=0;
    for(int i=1;i<=n;++i){
      lf[i]+= lf[i-1]+G*(a[i].second-a[i-1].second);
      G+=a[i].first;
    }
    G=0;
    a[n+1].second=0;
    for(int i=n;i>=1;--i){
      ri[i]+=ri[i+1]+G*abs(a[i+1].second-a[i].second);
      G+=a[i].first;
    }
    ll ans = 1e5;
    for(int i=1;i<=n;++i){
      ans=min(ans,lf[i]+ri[i]);
    }
    cout<<ans<<endl;
    return 0;
}