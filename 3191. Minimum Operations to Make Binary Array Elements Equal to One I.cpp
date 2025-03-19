#include<bits/stdc++.h>

class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int swapCnt=0;
            int len = nums.size();
            for(int i=0 ; i<len-2; i++) {
                if(nums[i] == 0) {
                    swapCnt++;
                    nums[i]=1;
                    if(nums[i+1] == 0) {
                        nums[i+1] = 1;
                    } else {
                        nums[i+1] = 0;
                    }
                    if(nums[i+2] == 0) {
                        nums[i+2] = 1;
                    } else {
                        nums[i+2] = 0;
                    }
                }
            }
    
            if(nums[len-2]==1 && nums[len-1]==1) {
                return swapCnt;
            }
            return -1;
        }
    };