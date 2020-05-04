/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

 

Example 1:

Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
 

Example 2:

Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0. */
class Solution {
public:
    int findComplement(int num) 
    {
        
         int d;
        vector<int>v;
        if(num == 0)return 1;
        while(num>0)
        {
            d = num%2;
            //cout<<d<<" ";
            v.push_back(d);
            num/=2;
            
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            v[i]= 1-v[i];
        }
       // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        int n=v.size();
       // cout<<n;
        d = 0;
        for(int i=0;i<n;i++)
        {
            cout<<v[i];
            d +=v[i]*pow(2,n-i-1);
            //cout<<d<<" ";
        }
        return d;
    }
};  


//Optimized solution

class Solution {
public:
	int bitwiseComplement(int N) {
		int temp=1;
		int x=1;
		while(temp<N){
			temp+=pow(2,x);  // making temp as 11111....till number of digits of N. We are converting it to decimal simultaneously hence pow(2,x) is done.
			x++;
		}
		return temp^N; //xor acts as controlled inverter, hence xoring N with 1 will invert the bits.
	}
};
