#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int> v;
    for(int i = 0; i<5; i++)
    {
        int p; cin>>p;
        v.push_back(p);
    }
    v.erase(v.begin()+1, v.begin()+4);
    cout<<v.size();
    cout<<endl;
    for(int i = 0;i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    
    return 0;
}