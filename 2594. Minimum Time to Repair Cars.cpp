#include<bits/stdc++.h>

class Solution {
    private: 
        bool mainFunction (vector<int>& ranks, int cars, long long time) {
            long long cnt=0;
            for(int i=0 ; i<ranks.size() ; i++) {
                long long r=ranks[i];
                long long n = sqrt(time / r);
                cnt+= n; 
            }
            if(cnt >= cars) {
                return true;
            } else {
                return false;
            }
        }
    
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long low=0;
            long long high=1e14;
    
            while(low<=high) {
                long long mid = low + (high-low)/2;
                if(mainFunction(ranks,cars,mid) == true) {
                    high = mid-1;
                } else {
                    low = mid+1;
                }
            }
    
            return low;
        }
    };