#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        for(int i = 0; i < s.size(); i++){
            map<int, int, greater<int>> mymap;
            int j = i;
            for(; j < s.size(); ++j){
                mymap[s[j]]++;
                if(mymap[s[j]] > 1){
                    
                    break;
                }
                // if(mymap.begin()->second > 1){
                //     len = max(len, j - i);
                //     break;
                // }
            }
            len = max(len, j - i);
        }
        return len;
    }
};

int main() {
    Solution solution;
    string s = " ";
    cout << solution.lengthOfLongestSubstring(s) << endl;
    return 0;
}