#include<bits/stdc++.h>

class Solution {
    private:
        vector<int> extractingRealAndImaginary (string temp) {
            int i=0;
            string real = "";
            string imaginary = "";
            
            while(temp[i] !=  '+') {
                real += temp[i];
                i++;
            }
            i++;
            while(temp[i] !=  'i') {
                imaginary += temp[i];
                i++;
            }
            int m = 1;
            int n = 1;
            return {stoi(real), stoi(imaginary)};
        }
    
    public:
        string complexNumberMultiply(string num1, string num2) {
            int a, b, c, d;
            vector<int> temp1 = extractingRealAndImaginary(num1);
            a = temp1[0];
            b = temp1[1];
    
            temp1 = extractingRealAndImaginary(num2);
            c = temp1[0];
            d = temp1[1];
    
            int e = (a * c) - (b * d);
            string real = to_string(e);
    
            int f = (a * d) + (b * c);
            string imaginary = to_string(f);
    
            string res = real + "+" + imaginary + "i";
            return res;
        }
    };