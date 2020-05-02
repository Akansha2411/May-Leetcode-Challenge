/* https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct. */
class Solution  //O(J*S)
{
public:
    int numJewelsInStones(string J, string S) 
    {
        int count = 0;
        for(int j=0;j<J.size();j++)
        {
            for(int i=0;i<S.size();i++)
            {
                if(S[i] == J[j])count++;
            }
        
        }
        return count;
        
    }
};


/* We can also for a O(m+n) solution wherein, we store elements of J in a set first and then check if elements of S are present in J or not.This way we also take care of duplicates, becuase sets don't store duplicates.
class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int count = 0;
        set<char> Set;
        for(int i=0;i<J.size();i++)Set.insert(J[i]);
        for(int i=0;i<S.size();i++)
        {
            if(Set.find(S[i])!=Set.end())count++;
        }
        return count;
        
    }
};  */
