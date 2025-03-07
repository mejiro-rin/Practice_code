// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N,K;
//     string S;
//     cin>>N>>K;
//     cin>>S;
// 	int sum=0;
// 	for(int i=0;i<N-1;++i){
// 		if(S[i]=='a'){
// 			for(int j=i+1;j<N;++j){
// 				if(S[j]=='b'){
// 					sum++;
// 				}
// 			}
// 		}
// 		else continue;
// 	}
// 	int add=sum*K+K*(K-1)*sum/2;
// 	cout<<add<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
  ll n,k;
  cin>>n>>k;
  string str;
  cin>>str;
	ll sum=0;
	ll _a=0;
  while(k--){
		for(const char &temp:str){
			if(temp=='a') _a++;
			else if(temp=='b'){
				sum=sum+_a;
			}
		}
	}
	cout<<sum<<"\n";
  return 0;
}