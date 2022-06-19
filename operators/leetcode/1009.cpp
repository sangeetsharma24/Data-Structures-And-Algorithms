// complement of a base 10 integer
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findComplement(int num)
    {
        int orig = num;
        //-----edge case-----
        if(num==0)
        return 1;

        //---general cases-----
        int mask = 0;
        while (num != 0)
        {
            mask = (mask<<1)|1;
            num = num>>1;
        }
        orig = (~orig)&mask;
        return orig;
    }
};
int main()
{
    Solution Q;
    int n;
    cin >> n;
    cout << Q.findComplement(n);
    return 0;
}