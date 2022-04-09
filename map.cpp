#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);


    map<int, int> m;
    for (auto it: v) {
        if (m.find(v) != m.end()) {
            // found
            m[v] += 1;
        }
        else {
            m[v] = 1;
        }
    }

    for (auto it: m) {
        cout << it.first << ": " << it.second;
    }
}