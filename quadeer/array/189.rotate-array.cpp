/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k% n;
        vector<int> temp(k);
        for(int i=0; i<k; i++){
            temp[i] = nums[n-k+i];
        }
        int temp1 = nums[n-k-1];
         for(int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }
        for(auto i:temp){
            cout<<i<<endl;
        }
        for(int i=0;i<k;i++){
        
            nums[i] = temp[i];
        }
        nums[n-1] = temp1;
        // return nums;
    }
};
// @lc code=end

