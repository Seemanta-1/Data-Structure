#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    while(q--)
    {
        int x;
        cin>>x;
       bool flag=false;
       int l,r;
       l=0;
       r=n-1;
       while(l<=r)
       {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            flag=true;
            break;
        }
        else if(x>arr[mid])
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
       }
       if(flag==true)
       {
        cout<<"found"<<endl;
       }
       else{
        cout<<"not found"<<endl;
       }
    }
}