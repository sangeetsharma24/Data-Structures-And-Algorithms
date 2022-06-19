#include <bits/stdc++.h>
using namespace std;
    class Solution {
public:
    int hammingWeight(uint32_t n) {
        //we will check if last bit is 1 or not and the we'll right shift by one
        int count = 0;
        while(n!=0)
        {
            if(n&1)
             count++;
            n =  n>>1;
        }
        return count;
    }
};
int main()
{
    uint32_t n; cin>>n;
    Solution Q;
    cout<<Q.hammingWeight(n);
    return 0;
}