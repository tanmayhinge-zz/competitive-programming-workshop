#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t, n, k, shoot_count=0, a;
    cin>>t;
    while(t--){
        cin>>n>>k;
        
        vector<int> v;
        for(int i=0; i<n; ++i){
            cin>>a;
            v.push_back(a);
        }
        
        for(auto i : v){
            if(i>k){
                shoot_count++;
            }
        }
        cout<<shoot_count<<endl;
        
        shoot_count=0;
    }
    return 0;
}