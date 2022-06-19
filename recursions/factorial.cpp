#include <bits/stdc++.h>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"enter number to find factorial - "; cin>>n;
    cout<<"factorial of the number "<<n<<" is - "<<fact(n);   
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
