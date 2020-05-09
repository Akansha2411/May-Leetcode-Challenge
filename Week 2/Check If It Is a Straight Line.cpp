/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.
ALGO : calculate slope through 1st 2 points, then check slope of each point with the first point.
We are doing pair instead of calculating slope as double as decimal might nt match,so we do pair with gcd.

*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        int c = __gcd((coordinates[1][1] - coordinates[0][1]),(coordinates[1][0] - coordinates[0][0]));
        cout<<c<<"\n";
        pair<int,int>m,slope;
        cout<<m.first<<" "<<m.second;
        bool flag = true;
        m = make_pair(((coordinates[1][1] - coordinates[0][1])/c),((coordinates[1][0] - coordinates[0][0])/c));
        for(int i=2;i<coordinates.size();i++)
        {
           c = __gcd((coordinates[i][1] - coordinates[0][1]),(coordinates[i][0] - coordinates[0][0]));   
           slope = make_pair(((coordinates[i][1] - coordinates[0][1])/c),((coordinates[i][0] - coordinates[0][0])/c)); 
            
            cout<<"\n";
            cout<<slope.first<<" "<<slope.second;
            if(m != slope)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};
