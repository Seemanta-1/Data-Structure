#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    vector<int>v3;
    v3=v2;
    v3.insert(v3.begin()+n,v.begin(),v.end());
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }

    return 0;

}