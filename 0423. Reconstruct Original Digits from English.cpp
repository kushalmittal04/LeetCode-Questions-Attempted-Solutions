#include<bits/stdc++.h>

class Solution {
    public:
        string originalDigits(string s) {
            unordered_map<char,int> freqs;
            map<int, int> vals;
    
            for(int i=0 ; i<s.length() ; i++) {
                freqs[s[i]]++;
            }
    
            vals[0]+=  freqs['z'];
            vals[2]+=  freqs['w'];
            vals[4]+=  freqs['u'];
            vals[6]+=  freqs['x'];
            vals[8]+=  freqs['g'];
    
            vals[1]+=  freqs['o'] - vals[0] - vals[2] - vals[4];
            vals[3]+=  freqs['h'] - vals[8];
            vals[5]+=  freqs['f'] - vals[4];
            vals[7]+=  freqs['s'] - vals[6];
            vals[9]+=  freqs['i'] - vals[5] - vals[6] - vals[8];        
    
            string res="";
            for(auto & val : vals) {
                int number = val.first;
                int count = val.second;
                string cnt = to_string(number);
                while (count>0) {
                    res += cnt;
                    count--;
                }
            }
    
    
            return res;
        }
    };