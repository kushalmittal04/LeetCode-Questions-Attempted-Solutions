#include<bits/stdc++.h>

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int len=nums.size();
            vector<int> ans(len,1);
    
            int prefix=1;
            for(int i=0 ; i<len-1 ; i++) {
                prefix *= nums[i]; 
                ans[i+1] *= prefix;
            }
    
            int suffix=1;
            for(int i=len-1 ; i>0 ; i--) {
                suffix *= nums[i];
                ans[i-1] *= suffix;
            }
    
            return ans;
        }
    };