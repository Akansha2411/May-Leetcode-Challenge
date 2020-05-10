/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false */
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        double n = sqrt(num);
        if(n == floor(n))return true;
        else return false;
    }
};

/* 
This solution makes use of the fact that all square numbers are sum of odd numbers starting from 1.
For ex :
1 = 1
1+3 = 4
1 + 3 + 5 = 9
1 + 3 + 5 + 7 = 16
.... and so on
So i keep subtracting odd numbers from the given number, starting from 1. If the number eventually reaches 0, it is a perfect square. If it reaches a negative number without reaching 0 it is not a perfect square.
So the code goes like : */

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(num>0){
            num -= i;      //Subtracting odd number from num and updating num
            i +=2;         // Updating i to the next odd number
            if(!num) return true;
        }
        return false;
    }
};
