

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum=0;
        for(int i = 0;i<nums.size();i++)
            sum^=nums[i];
        return sum;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {4,1,2,1,2};
    cout<<obj.singleNumber(vec);
    return 0;
}