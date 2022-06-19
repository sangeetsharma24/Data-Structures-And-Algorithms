#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n; cin>>n;
    vector<int> v;
    vector<int> p;
    for(int i = 0; i<n; i++)
    {
        int p; cin>>p;
        v.push_back(p);
    }
    int x; cin>>x;
    v.erase(v.begin()+(x-1));
    int y,z; cin>>y>>z;
    p.erase(v.begin()+(y-1), v.begin()+(z-1));
    cout<<v.size()<<endl;
    for(int i = 0; i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }    
    return 0;
}