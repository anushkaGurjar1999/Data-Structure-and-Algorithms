/*
 * Author : Anushka Gurjar
 * Date   : April 2020
 * flags    : -std=c++14
*/

#include<bits/stdc++.h>
using namespace std;

// Problem Statement: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/

class Solution {
public:
    int numJewelsInStones(string J, string S){
        unordered_map<char, int> m;
        int result = 0;
        
        for(auto ch: S)
            m[ch]++;
        
        for(auto ch: J){
            if(m.find(ch) != m.end())
                result += m[ch];
        }
        
        return result;
    }
};

/*
Count frequency of Stones in map
Iterate through Jewels ->
    If jewel found in map -> update result by adding frequency
*/


// ******************************************************* Using Set **************************************************

class Solution {
public:
    int numJewelsInStones(string J, string S){
        unordered_set<char> s(J.begin(), J.end());
        int result = 0;
        
        for(auto ch: S){
            if(s.find(ch) != s.end())
                result++;
        }
                
        return result;
    }
};
