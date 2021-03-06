/https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
/* Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters. */
class Solution {
public:
    int firstUniqChar(string s) 
    {
        map<char,int>mp;
        int idx = -1;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]] == 1)
            {
                idx = i;
                break;
            }
        }
        return idx;
        
    }
};
