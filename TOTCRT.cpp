#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n = 0;
        cin>>n;
        n*=3;
        map <string, int> m;
        while(n--){
            string s;
            cin>>s;
            int c;
            cin>>c;
            m[s] +=c;
        }
        // for(auto i : m)
        // cout<<i.second<<" ";
        vector<int> v;
        for (auto i: m){
            //cout<< "inserted: "<<i.second<<" ";
          v.push_back(i.second);  
        } 
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
        cout << endl;
        
        
        
    }
    return 0;
}