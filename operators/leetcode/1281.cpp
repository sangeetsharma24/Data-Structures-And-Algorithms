//1281. Subtract the Product and Sum of Digits of an Integer
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        int rem, num = n;
        while(num != 0){
        rem = num%10;
        product = product*rem;
        num = num/10;
        }
        num = n;
        while(num != 0){
        rem = num%10;
        sum = sum+rem;
        num = num/10;
        }
        return product-sum;
    }
};    
int main()
{
    Solution Q;
    int n; cout<<"n = "; cin>>n;
    cout<<Q.subtractProductAndSum(n);
    return 0;
}