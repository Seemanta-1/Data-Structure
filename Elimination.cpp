#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for(auto c : s)
        {
            if(st.empty()) 
            st.push(c);
            else
            {
                if(c == '1' and st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }

        if(st.empty()) 
        cout << "YES" << endl;
        else {cout << "NO" << endl;}

    }
    return 0;
}