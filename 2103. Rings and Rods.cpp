#include<bits/stdc++.h>

class Solution {
    public:
        int countPoints(string rings) {
            int n = rings.length();
            if(n<6) {
                return 0;
            }
    
            map<char,set<char>> freqs;
            for(int i=0 ; i<n ; i=i+2) {
                char color = rings[i];
                char place = rings[i+1];
    
                freqs[place].insert(color); 
            }
            int cnt=0;
            for(auto & freq : freqs) {
                if (freq.second.size() == 3) {
                    cnt++;
                }
            }
    
            return cnt;
    
        }
    };