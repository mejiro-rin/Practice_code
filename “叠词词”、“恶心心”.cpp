// #include<bits/stdc++.h>
// using namespace std;

// long long C(long long n, long long m)
// {
// 	if(m<n-m)m=n-m;
// 	long long ans = 1;
// 	for (long long i=m+1;i<=n;i++) ans*= i;
// 	for (long long i=1;i<=n-m;i++) ans/= i;
// 	return ans;
// }

// int main(){
//     long long a;long long sum=0;
//     string c;
//     char T[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//     cin>>a;
//     cin>>c;
//     for(long long i=0;i<a;i++){
//         for(long long s=0;s<26;s++){
//             if(c[i]==T[s]){
//                 for(long long d=s+1;d<26;d++){
//                     long long j=0;
//                     for(long long r=i+1;r<a;r++){
//                         if(T[d]==c[r]){
//                             j++;
//                         }
//                     }
//                     if(j>=2){
//                         sum=sum+C(j,2);
//                     }
//                 }
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
//     }

#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize(2)
#define int long long
#define endl '\n'
#define PII pair<int,int>
#define INF 1e18

const int N = 1e5 + 7;
int a[30][N];
void slove () {
    string s;
    int n;
    cin >> n >> s;
    s = " " + s;
    for (int i = 1; i <= n; i++) a[(int)(s[i] - 'a')][i] ++;
    for (int i = 0; i < 26; i++) 
        for (int j = 1; j <= n; j++)
            a[i][j] += a[i][j - 1];

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 26; j++) {
            if (j == (int)(s[i] - 'a')) continue;
            ans += max(0ll, (a[j][n] - a[j][i]) * (a[j][n] - a[j][i] - 1) / 2);
        }
    }
    cout << ans << endl;

}

signed main () {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    slove();
}
