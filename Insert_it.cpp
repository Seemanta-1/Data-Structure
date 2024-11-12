#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int>A(N);
    for (int i= 0;i<N;i++) {
        cin >>A[i];
    }
    int M;
    cin >> M;

    vector<int>B(M);
    for (int i=0;i<M;i++) {
        cin >>B[i];
    }

    int X;
    cin >> X;

    vector<int> r;
    for (int i = 0; i < X; i++) {
        r.push_back(A[i]);
    }

    for (int i = 0; i < M; i++) {
        r.push_back(B[i]);
    }

    for (int i = X; i < N; i++) {
        r.push_back(A[i]);
    }

    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << " ";
    }

    return 0;
}