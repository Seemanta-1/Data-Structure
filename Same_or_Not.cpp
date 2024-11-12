#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int m; 
    cin >> m;
    stack<int> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x; 
        s.push(x);
    }
    queue<int> q;
    for(int i = 0; i < m; i++) {
        int x; 
        cin >> x; 
        q.push(x);
        }

    bool flag = true;
    if(s.size() != q.size()) 
    flag = false;
    else
    {
        while(!s.empty())
        {
            if(s.top() != q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }

    if(flag)
     cout << "YES" << endl;
    else {cout << "NO" << endl;}
    return 0;
}