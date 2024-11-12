#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> v(N);
        for (int i = 0; i < N; i++) {
            cin >>v[i];
        }

        bool Sort = true;
        for (int i = 1; i < N; i++) {
            if (v[i-1] > v[i]) {
                Sort = false;
                break;
            }
        }

        if (Sort) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}