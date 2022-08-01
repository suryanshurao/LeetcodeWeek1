
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =  0;
        for(int i  = 1;i<prices.size();i++)
            if(prices[i]>prices[i-1])
                maxProfit+=prices[i]-prices[i-1];
        return maxProfit;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {7,1,5,3,6,4};
    cout<<obj.maxProfit(vec);
    return 0;
}