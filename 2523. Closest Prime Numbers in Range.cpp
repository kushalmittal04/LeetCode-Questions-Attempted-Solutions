#include<bits/stdc++.h>

class Solution {
    private:
        bool isPrime(int num) {
            if (num<2) 
                return false;
            if(num==2 || num==3) {
                return true;
            }
            int last = pow(num,0.5);
            for(int i=2; i<=last ; i++) {
                if(num %i == 0) {
                    return false;
                }
            }
            return true;
        }
    
    public:
        vector<int> closestPrimes(int left, int right) {
            vector<int> primes;
    
            for(int i=left ; i<= right ; i++) {
                if(isPrime(i)) {
                    primes.push_back(i);
                }
            }
    
            int noOfPrime = primes.size();
            if (noOfPrime < 2) {
                return {-1,-1};
            }
    
            int num1 = primes[0];
            int num2 = primes[1];
            int diff = num2 - num1;
    
            if(num1 == 2) {
                return {2,3};
            }
    
            for(int i=1 ; i< noOfPrime-1 ; i++) {
                if(diff > (primes[i+1] - primes[i])) {
                    diff = primes[i+1] - primes[i];
                    num1 = primes[i];
                    num2 = primes[i+1];
                }
                if (diff == 2) {
                    break;
                }
            }
    
            return {num1,num2};
            
        }
    };