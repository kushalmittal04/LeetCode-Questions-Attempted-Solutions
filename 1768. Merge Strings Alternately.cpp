#include<bits/stdc++.h>

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string res="";
            int i=0, j=0, k=0;
            int m=word1.length(), n=word2.length();
            while(i<m && j<n) {
                if(k%2 == 0) {
                    res += word1[i];
                    i++;
                } else {
                    res += word2[j];
                    j++;
                }
                k++;
            }
            while(i<m) {
                res += word1[i];
                i++;
                k++;
            }
            while(j<n) {
                res += word2[j];
                j++;
                k++;
            }
            return res;
        }
    };