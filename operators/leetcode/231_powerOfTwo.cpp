#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
  int check = 0;
  while(n!=0)
  {
    if(n&1)
    {
        check++;
        n = n>>1;
    }
    else n = n>>1;
    }
    if(check==1)
    return true;
    else
    return false;      
    }
    /* best solution
    int p = 2;
  for(int i = 0; i<32; i++)
    {
      if(n == p)
        return true;
      if(p<INT_MAX/2)
      p = p*2;
    }
     return false;
    }
    */
};    
int main()
{
    Solution Q;
    int n; cin>>n;
    cout<<Q.isPowerOfTwo(n) ;   
    return 0;
}