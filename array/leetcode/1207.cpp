//1207. Unique Number of Occurrences - return true if number of occurences of each value is unique
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size = arr.size();
        map<int,int> m;
        sort(arr.begin(),arr.end());
        int p = 0;
        for(int i = p;;)
        { int count = 0;
            int key = arr[i];
            int j;
            for(j = i; arr[i]==arr[j]; j++)
            {
                count++;
            }
            m.insert({arr[key],count});
             p = j+1;
             if(p==size)
             {
                break;
             }
        }
        map<int,int>::iterator itr;
        
        int array[m.size()];
        int i = 0;
        for(itr = m.begin(); itr != m.end(); ++itr)
        {
            array[i]=itr->second;
            i++;
        }
        int ans = 0;
        for(int j = 0; j<m.size(); j++)
        {
            ans = ans^array[j];
        }
        if(ans == 0)
        {
            return true;
        }
        else
        return false;
    }
};
    
int main()
{
    vector<int> arr; int size; cout<<"enter size - "; cin>>size;
    for(int i = 0; i<size; i++)
    {
        int p; cin>>p;
        arr.push_back(p);
    }
    cout<<endl;
    Solution Q;
    cout<<Q.uniqueOccurrences(arr);
    
    return 0;
}