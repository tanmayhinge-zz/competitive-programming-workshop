#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,int> m = { //basic map declaration
        {'a', 2},
        {'b', 3},
        {'c', 0}
    };
    m['d'] = 3; // adding new element to map
    cout<<m['d']<<endl;
    
    pair<char,int> p = {'e', 4};
    
    m.insert(p); // insert a new pair to the map
    
    cout<<m['e']<<endl;
    
    for(auto i: m) // printing a map
    cout<<i.first<<" "<<i.second<<endl;
    
    m.clear(); // empties the map
    
    cout<<m.empty()<<endl; // returns 1 if empty and 0 if not empty

}