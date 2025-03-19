#include<bits/stdc++.h>

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int len = nums.size();
            int zero=-1;
            for(int i=0 ; i<len ; i++) {
                if(nums[i]==0) {
                    zero = i;
                    int j=i+1;
                    while(j<len && nums[j] == 0) {
                        j++;
                    }
                    if(j<len) {
                        swap(nums[i],nums[j]);
                    } else {
                        break;
                    }
                }
            }
            return;
        }
    };