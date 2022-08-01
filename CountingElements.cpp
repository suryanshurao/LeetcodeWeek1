

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i : arr)
            m[i]++;
        int count =0;
        for(auto i : arr)
            if(m.count(i+1) > 0)
                    count++;
        
        return count;
    }
};

int main()
{
    Solution obj;
    vector<int> vec = {1,1,3,3,5,5,7,7};
    cout<<obj.countElements(vec);
    return 0;
}