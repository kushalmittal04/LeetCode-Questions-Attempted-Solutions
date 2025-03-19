#include<bits/stdc++.h>

class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            int cnt=0;
            unordered_map<int,int> freqs;
            for(auto num : nums) {
                freqs[num]++;
            }
    
            for(auto & freq : freqs) {
                int num = freq.first;
                int numCnt = freq.second;
                int val = k-num;
        
                if(freqs.find(val) != freqs.end()) {
                    if(num == val) {
                        cnt+= numCnt/2;
                        freqs[num] -= 0;
                    } else {
                        int minCnt = min(numCnt,freqs[val]);
                        cnt += minCnt;
                        freqs[num] -= minCnt;
                        freqs[val] -= minCnt;    
                    }
                }
            }
    
            return cnt;
        }
    };