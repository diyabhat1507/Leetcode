/*Medium
Topics
Companies
Given an integer array nums, find the
subarray
 with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;

        for (const int num:nums){
            sum=max(num,sum+num);
            ans=max(ans,sum);
        }
    return ans;
}
};
