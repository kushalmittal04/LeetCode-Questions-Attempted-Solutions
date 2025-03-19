#include<bits/stdc++.h>

class Solution {
    public:
        string reverseWords(string s) {
            vector<string> words;
            string word="";
            for(int i=0 ; i<s.length() ; i++) {
                if(s[i] == ' ') {
                    if(!word.empty()) {
                        words.push_back(word);
                        word="";
                    }
                } else {
                    word+= s[i];
                }
            }
            if(!word.empty()) {
                words.push_back(word);
                word="";
            }
    
            if(words.size()<1) {
                return "";
            }
    
            for(int i=words.size()-1 ; i>0 ; i--) {
                word += words[i] + " ";
            }
            word += words[0];
    
            return word; 
        }
    };