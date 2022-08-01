
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i = 0;i<nums.size();i++)
            if(nums[i]!=0)
                swap(nums[i],nums[k++]);
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {0,1,0,3,12};
    obj.moveZeroes(vec);
    for(auto i : vec)
        cout<<i<<" ";
    return 0;
}