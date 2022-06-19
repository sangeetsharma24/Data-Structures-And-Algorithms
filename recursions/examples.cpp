#include <bits/stdc++.h>
using namespace std;
//recursive funciton to print numbers in decending order.
void fun1(int n)
{
    if(n>0)
    {
        cout<<n;//acensding
        fun1(n-1);
        cout<<endl<<n;//descending
    }
}    
int main()
{
    fun1(5);
    
    
    return 0;
}