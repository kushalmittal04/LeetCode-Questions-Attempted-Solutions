#include<bits/stdc++.h>

class Solution {
    private:
        bool isVowel (char ch) {
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                return true;
            }
            return false;
        }
    
    public:
        string reverseVowels(string s) {
            vector<int> locs;
            for(int i=0 ; i<s.length() ; i++) {
                if(isVowel(s[i])) {
                    locs.push_back(i);
                }
            }
    
            int len = locs.size();
            if(len<2) {
                return s;
            }
    
            string res=s;
            for(int i=0 ; i<len/2 ; i++) {
                swap(res[locs[i]], res[locs[len-i-1]]);
            }
            return res;
            
        }
    };


    class Solution {
        private:
            bool isVowel (char ch) {
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                    return true;
                } else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
                    return true;
                } else {
                    return false;
                }
            }
        
        public:
            string reverseVowels(string s) {
                int len=s.length();
                int low =0;
                int high=len-1;
        
                while(low<high) {
                    while(low<len) {
                        if(isVowel(s[low])) {
                            break;
                        }
                        low++;
                    }
        
                    while(high>=0) {
                        if(isVowel(s[high])) {
                            break;
                        }
                        high--;
                    }
                    
                    if(low<high) {
                        swap(s[low], s[high]);
                    }
                    low++;
                    high--;
                }
        
                return s;
            }
        };