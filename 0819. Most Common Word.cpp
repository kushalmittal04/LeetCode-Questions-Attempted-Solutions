#include<bits/stdc++.h>

class Solution {
    public:
        string mostCommonWord(string paragraph, vector<string>& banned) {
            string temp="";
            for(int i=0 ; i<paragraph.length() ; i++) {
                if (paragraph[i] >= 65 && paragraph[i] <= 90) {
                    int val = paragraph[i] + 32;
                    char support = val;
                    temp += support;
                } else if (paragraph[i] >= 97 && paragraph[i] <= 122) {
                    temp += paragraph[i]; 
                } else {
                    temp+= " ";
                }
            }
    
            unordered_map<string,int> freqs;
            string str="";
            
            for(int i=0 ; i< temp.length() ; i++) {
                if(temp[i] != ' ') {
                    str += temp[i];
                } else {
                    if(!str.empty()) {
                        for(int i=0; i<banned.size() ; i++) {
                            if(banned[i] == str) {
                                str="";
                                break;
                            }
                        }
                    }
                    if(!str.empty()) {
                        freqs[str]++;
                        str = "";
                    }
                }
            }
    
            bool check = false;
            if(!str.empty()) {
                for(int i=0; i<banned.size() ; i++) {
                    if(banned[i] == str) {
                        check = true;
                        break;
                    }
                }
                if (!check) {
                    freqs[str]++;
            } 
    
            }
            
            str="";
            int count=0;
            for(auto & freq : freqs) {
                if (freq.second > count) {
                    count = freq.second;
                    str = freq.first;
                }
            }
    
            return str;
        }
    };