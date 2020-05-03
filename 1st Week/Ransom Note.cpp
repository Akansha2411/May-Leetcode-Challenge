/*https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map<char,int>mp1,mp2;
        bool flag = true;
        if(magazine.size()<ransomNote.size()) return false;
        for(int i=0;i<ransomNote.size();i++)mp1[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)mp2[magazine[i]]++;
        for(int i=0;i<ransomNote.size();i++)
        {
            if(mp1[ransomNote[i]] > mp2[ransomNote[i]])
            {
                flag = false;
                break;
            }
        }
        return flag;
        
    }
};
