#include<bits/stdc++.h>

class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int len = nums.size();
            int left=0, right=0, countZero=0, maxLen=0;
    
            while(right<len) {
                if(nums[right] == 0) {
                    countZero++;
                }
    
                while(countZero > k) {
                    if(nums[left] == 0) {
                        countZero--;
                    }
                    left++;
                }
    
                maxLen = max(maxLen, right+1-left);
                right++;
            }
            return maxLen;
        }
    };