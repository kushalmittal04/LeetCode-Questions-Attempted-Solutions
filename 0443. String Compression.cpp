#include<bits/stdc++.h>

class Solution {
    public:
        int compress(vector<char>& chars) {
            vector<char> str;
            int cnt=1;
            int i;
            for(i=0 ; i<chars.size()-1 ; i++) {
                if(chars[i]==chars[i+1]) {
                    cnt++;
                } else {
                    if (cnt == 1) {
                        str.push_back(chars[i]);
                    } else {
                        str.push_back(chars[i]);
                        string count = to_string(cnt);
                        for(int j=0 ; j<count.length() ; j++) {
                            str.push_back(count[j]);
                        }
                    }
                    cnt=1;
                }
            }
            if (cnt == 1) {
                str.push_back(chars[i]);
            } else {
                str.push_back(chars[i]);
                string count = to_string(cnt);
                for(int j=0 ; j<count.length() ; j++) {
                    str.push_back(count[j]);
                }
            }
            cnt=1;
    
            for(int i=0 ; i<str.size() ; i++) {
                chars[i] = str[i];
            }
            chars.resize(str.size());
            return str.size();
        }
    };