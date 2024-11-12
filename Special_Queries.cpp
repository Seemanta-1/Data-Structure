#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    queue<string>q;
    
    for (int i = 0; i <n; i++) {
        int m;
        cin >> m;
        
        if (m == 0) {
            string name;
            cin >> name;
            q.push(name);
        } else {
            if (q.empty()) {
                cout << "Invalid" << endl;
            } 
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    
    return 0;
}