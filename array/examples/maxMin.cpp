#include <bits/stdc++.h>
using namespace std;
void comparison(int a[], int size);    
int main()
{
    
    int n; cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    comparison(arr,n);
    return 0;
}
void comparison(int a[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(a[i]>max)
        max = a[i];
    }
    for(int i=0; i<size; i++)
    {
        if(a[i]<min)
        min = a[i];
    }
    cout<<"maximum integer is - "<<max<<endl<<"minimum integer is - "<<min;
}