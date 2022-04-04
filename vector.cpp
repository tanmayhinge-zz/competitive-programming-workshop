#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1,2,3};
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.size()<<endl;
    
    v1.push_back(9); 
    cout<<v1.back()<<endl;
    
    v1.pop_back();
    v1.insert(v1.begin(), 5);
    cout <<v1[0] <<endl; 
    
    // printing elements of vector
    for (auto i = v1.begin(); i != v1.end(); ++i)
    cout << ' ' << *i;
}
