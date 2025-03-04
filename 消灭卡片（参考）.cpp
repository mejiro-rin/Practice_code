#include <bits/stdc++.h>
using namespace std;

using ll=long long;
unordered_map<ll, ll> memo; // 用于记忆化搜索

int dfs(int n) {
    if (n < 0) return -1; // 不可能消灭负数张卡片
    if (n == 0) return 0; // 完成消灭，返回0次行动
    if (memo.count(n)) return memo[n]; // 如果已经计算过，直接返回结果

    int res = -1;
    int try3 = dfs(n - 3); // 尝试消灭3张卡片
    int try5 = dfs(n - 5); // 尝试消灭5张卡片

    if (try3 != -1) res = try3 + 1; // 如果尝试消灭3张可行，更新结果
    if (try5 != -1 && (res == -1 || try5 + 1 < res)) res = try5 + 1; // 如果尝试消灭5张更优，更新结果

    memo[n] = res; // 记录当前卡片数量的最小行动次数
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        memo.clear(); // 清空记忆化搜索的记录
        int result = dfs(n);
        cout << result << endl;
    }
    return 0;
}