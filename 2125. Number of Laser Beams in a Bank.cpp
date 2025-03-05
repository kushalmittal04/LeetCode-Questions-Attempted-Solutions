#include<bits/stdc++.h>

class Solution {
    private:
        int noOfBeams (string temp) {
            int m = temp.length();
            int count = 0;
            int i=0;
            while(i < m) {
                if(temp[i] == '1') {
                    count++;
                }
                i++;
            }
            return count;
        }
    
    public:
        int numberOfBeams(vector<string>& bank) {
            int m=bank.size();
            vector<int> beams;
            for(int i=0 ; i<m ; i++) {
                int cnt = noOfBeams(bank[i]);
                if (cnt != 0) {
                    beams.push_back(cnt);
                }
            }
    
            int k = beams.size();
            if(k<2) {
                return 0;
            }
            int cnts = 0;
            for(int i=0 ; i<k-1 ; i++) {
                cnts = cnts + (beams[i]*beams[i+1]);
            }
            return cnts;
    
        }
    };