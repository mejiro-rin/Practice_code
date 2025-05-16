#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int m = nums1.size(), n = nums2.size();
        while((i + j) < ((m + n - 1) / 2)){
            if(i == m || j == n) break;
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        if(i != m){
            while((i + j) < ((m + n - 1) / 2)){
                i++;
            }
        }
        else if(j != n){
            while((i + j) < ((m + n - 1) / 2)){
                j++;
            }
        }
        cout << i << " " << j << endl;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2, 5, 6, 7};
    // cout << solution.findMedianSortedArrays(nums1, nums2) << endl;
    solution.findMedianSortedArrays(nums1, nums2);
    return 0;
}