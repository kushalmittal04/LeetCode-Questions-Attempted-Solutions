#include<bits/stdc++.h>

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            int total = n;
            vector<int> temp;
            int i=0;
            while(pow(3,i)<=n) {
                temp.push_back(pow(3,i));
                i++;
            }
            int size = temp.size();
            for(int j=size-1 ; j>=0 ; j--) {
                if (total >= temp[j]) {
                    total -= temp[j];
                }
                if(total == 0) {
                    return true;
                }
            }
            return false;
        }
    };