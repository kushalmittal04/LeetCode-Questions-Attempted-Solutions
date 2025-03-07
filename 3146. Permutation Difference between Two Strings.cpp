#include<bits/stdc++.h>

class Solution {
    public:
        int findPermutationDifference(string s, string t) {
            unordered_map<char,int> freqs;
            int n = s.length();
    
            for(int i=0 ; i<n ; i++) {
                freqs[s[i]]+= i;
                freqs[t[i]]-= i;
            }
    
            int res=0;
            int m = freqs.size();
            
            for (auto & freq : freqs) {
                res += abs(freq.second);
            }
    
            return res;
        }
    };