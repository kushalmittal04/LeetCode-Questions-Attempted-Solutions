#include<bits/stdc++.h>

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int vacant=0;
            int size = flowerbed.size();
            int cnt=0;
            int i=0;
    
            if(size==1) {
                if (flowerbed[0]==0) {
                    cnt++;
                }
                return n<=cnt ? true : false;
            }
    
    
            while(i<size && flowerbed[i]==0) {
                cnt++;
                i++;
            }
            if(cnt > 1) {
                if (i==size) {
                    vacant += (cnt+1)/2;
                }
                else {
                    vacant += (cnt)/2;
                }
            }
            cnt=0;
    
            while(i<size) {
                if(flowerbed[i]==0) {
                    cnt++;
                } else {
                    if(cnt > 2) {
                        vacant += (cnt-1)/2;
                    } 
                    cnt=0;
                }
                i++;
            }
            if(cnt > 1) {
                vacant += (cnt)/2;
            } 
            return n<=vacant ? true : false;
        }
    };