#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t, n, x, p, score=0;
    cin>>t;
    while(t--){
        cin>>n; // total questions
        cin>>x; // questions right
        cin>>p; // passing score
        
        score = (x*3) - (n-x);
        
        if(score>=p){
            cout<<"PASS" <<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
        
        
        
    }
    return 0;
}