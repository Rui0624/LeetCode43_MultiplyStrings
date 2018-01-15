//
//  main.cpp
//  LeetCode43_MultiplyStrings
//
//  Created by Rui on 1/14/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();
        int k = m + n - 2;
        vector<int> v(m + n, 0);
        string res;
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
            {
                v[k - i - j] += (num1[i] - '0') * (num2[j] - '0');
            }
        
        int carry = 0;
        
        for(int i = 0; i < v.size(); i++)
        {
            v[i] += carry;
            carry = v[i] / 10;
            v[i] = v[i] % 10;
        }
        
        int i = m + n - 1;
        while (v[i] == 0) {
            i--;
        }
        
        if(i < 0)
            return "0";
        
        while (i > = 0) {
            res.push_back(v[i]);
            i--;
        }
        
        return res;
    }
};
