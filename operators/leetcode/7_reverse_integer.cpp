#include <bits/stdc++.h>
using namespace std;
 class solution{
    public:
    int reverseinteger(int x)
    {
        long int ri = 0;
        int num = x;
        while(num!=0)
        {
        ri = ri*10+(num%10);
        num = num/10;
        }
        if((ri<pow(2,31)-1)&&(ri>(-pow(2,31))))
        return ri;
        else return 0;
    }
 };
int main()
{
    int n; cin>>n;
    solution Q;
    cout<<Q.reverseinteger(n);
    return 0;
}