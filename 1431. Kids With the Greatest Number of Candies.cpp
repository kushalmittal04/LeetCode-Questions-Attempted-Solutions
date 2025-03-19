#include<bits/stdc++.h>

class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            int n=candies.size();
            int largest = candies[0];
            for(int i=1 ; i<n ; i++) {
                if(candies[i]>largest) {
                    largest = candies[i];
                }
            }
    
            vector<bool> res(n);
            for(int i=0 ; i<n ; i++) {
                int temp = candies[i] + extraCandies;
                if(temp >= largest) {
                    res[i] = true;
                } else {
                    res[i] = false;
                }
            }
    
            return res;
        }
    };