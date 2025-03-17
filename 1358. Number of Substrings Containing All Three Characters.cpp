#include<bits/stdc++.h>

class Solution {
    public:
        int numberOfSubstrings(string s) {
            int cnts=0;
            int len = s.length();
            int j=0;
            unordered_map<char,int> temps;
            for(int i=0 ; i<len ; i++) {
                temps[s[i]]++;
                while(temps['a']>0 && temps['b']>0 && temps['c']>0) {
                    cnts += len-i;
                    temps[s[j]]--;
                    j++;
                }
            }
            return cnts;
        }
    };