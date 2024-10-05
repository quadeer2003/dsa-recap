/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string original = to_string(x);
        string rev = string(original.rbegin(),original.rend());
        return original == rev;
    }
};
// @lc code=end

