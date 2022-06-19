#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size)
{
    for(int i = 0; i<(size/2); i++)
    swap(arr[i],arr[size-i-1]);
}    
int main()
{
    int a[6] = {1,2,3,4,5,6};
    reverseArray(a,6);
    for(int i = 0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}