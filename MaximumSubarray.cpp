
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     
     int maxSubArray(vector<int>& nums) {
        int Max = -2147483648;
        int curr = 0;
        for(int i = 0;i<nums.size();i++){
            curr+=nums[i];
            Max = max(curr,Max);
            if(curr<0)
                curr=0;
        }
        return Max;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<obj.maxSubArray(vec);
    return 0;
}