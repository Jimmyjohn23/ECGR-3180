#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// LeetCode 242 Valid Anagram
class Solution{
public:
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }

};