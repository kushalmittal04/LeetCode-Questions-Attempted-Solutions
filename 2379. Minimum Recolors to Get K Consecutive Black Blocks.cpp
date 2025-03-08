#include<bits/stdc++.h>

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int small=k;
            for(int i=0 ; i<=blocks.length()-k ; i++) {
                int cnt=0;
                for(int j=i; j<i+k ; j++) {
                    if(blocks[j] == 'W') {
                        cnt++;
                    }
                }
                if(cnt < small) {
                    small = cnt;
                    if(small == 0) {
                        return 0;
                    }
                }
    
            }
            return small;
        }
    };