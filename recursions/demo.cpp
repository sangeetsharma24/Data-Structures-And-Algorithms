#include <bits/stdc++.h>
using namespace std;
int ways(int x, int n, int c)
{
    int rem =x - pow(c,n);
    if(x==0)
    return 1;
    else if(x<0)
    return 0;

    return ways(rem, n, c+1) + ways(x, n, c+1);
}
int powerSum(int X, int N) {
 return ways(X, N, 1);
}

int main()
{
    
    cout<<powerSum(13,2);
    
    return 0;
}