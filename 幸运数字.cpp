#include<bits/stdc++.h>
using namespace std;

int he(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // 取出最后一位数字并加到 sum
        num /= 10;       // 去掉最后一位数字
    }
    return sum;
}

int main(){
    int a=10,max=100000000;
    int Sum=0;
    while (a<max)
    {
        string Num = to_string(a);
        int N = Num.length();
        if(N%2!=0){
            a*=10;
            N+=1;
        }
        int t=pow(10,N/2);
        int l=a/t,r=a%t;
        if(he(l)==he(r))Sum+=1;
        a+=1;
    }
    cout<<Sum;
    return 0;
}