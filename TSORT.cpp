#include<bits/stdc++.h>
#define ll long long int
using namespace  std;

int main(){

    int t,s, a;
    vector<int> n;
    cin>>t;
    while(t--){

        cin >> a;
        n.push_back(a);
    }
        sort(n.begin(), n.end());

        for (auto x : n)
            cout << x << "\n";

}
