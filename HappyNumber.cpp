

#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int, int> checkRepeat;
        int sum = 0;
        while(1){
            while(n>0){
                sum+= pow(n%10,2);
                n=n/10;
            }
            if(sum==1)
                return true;
            if(checkRepeat.count(sum)>0)
                return false;
            checkRepeat[sum] = 1;
            n = sum;
            sum = 0;
            
        }
    }
};

int main()
{
    Solution obj;
    cout<<obj.isHappy(18);
    return 0;
}