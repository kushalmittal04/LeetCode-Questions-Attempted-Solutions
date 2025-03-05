#include<bits/stdc++.h>

class Solution {
    public:
        long long coloredCells(int n) {
            if (n==1)
                return 1;
            long long count=1;
            for(long long i=1 ; i<=n ; i++) {
                count += (4 * (i-1));
            }
            return count;
        }
    };