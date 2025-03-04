#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int mp[N][2],arr[N][N];

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        cin>>mp[i][0]>>mp[i][1];
        for(int j=0;j<mp[i][0];j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<t;i++){
        set<int> myset;
        for(int j=0;j<mp[i][0];j++){
            myset.insert(arr[i][j]);
        }
        vector<int> count;//统计天数
        for(const auto& num:myset){
            int arr1[N];//修改与更新
            for(int j=0;j<mp[i][0];j++){
            arr1[j]=arr[i][j];
            }
            int dy=0;//天数
            for(int _i=0;_i<mp[i][0];_i++){
                if(arr1[_i]!=num){
                    for(int _j=0;_j<mp[i][1];_j++){
                        arr1[_i+_j]=num;
                    }
                    dy++;
                }
            }
            count.push_back(dy);
        }
        sort(count.begin(),count.end(),less<int>());
        cout<<count[0]<<endl;
    }

    return 0;
}