#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=arr[i]+pre[i-1];
    }

    while(q--)
    {
        long long int l,r,sum;
        cin>>l>>r;
        l--;
        r--;
        if(l==0) sum=pre[r];
        else sum=pre[r]-pre[l-1];
        cout<<sum<<endl;
    }
}