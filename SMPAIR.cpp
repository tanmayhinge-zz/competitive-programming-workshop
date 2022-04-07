#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        vector<int> v;
        cin>>n;
        for(int i = 0; i<n; i++){
            cin>>x;
            //cout<<x;
            v.push_back(x);
        }
        
        sort(v.begin(), v.end());
        
        cout<<v[0]+v[1]<<endl;
    }
    return 0;
}