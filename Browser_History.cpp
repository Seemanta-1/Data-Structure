#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> addressList;
    string val;

    while (cin >> val) {
        if (val == "end") break;
        addressList.push_back(val);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    auto current = addressList.begin();
    string c, address;

    for (int i = 0; i < Q; ++i) {
        getline(cin, c);
        stringstream ss(c);
        string cd;
        ss >> cd;

        if (cd == "visit") {
            ss >> address;
            auto it = find(addressList.begin(), addressList.end(), address);
            if (it != addressList.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (cd == "next") {
            if (current != addressList.end() && next(current) != addressList.end()) {
                ++current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (cd == "prev") {
            if (current != addressList.begin()) {
                --current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
