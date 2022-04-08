#include<bits/stdc++.h> // header files, here this particular header file imports all the things you need for competitive programming

using namespace std; // specifies that we are working in the "standard" namespace, so basically you dont need to write std:: before all the non native C code all the time i.e. cout, cin, endl etc...

/*
MULTI
LINE
COMMENT
*/

int main(){ // entry point for the program
    int a = 31; // integer declaration
    int b; // integer declaration
    b = a; // b takes the value of a
    string s1 = "hello s1"; // C++ style string declaration
    string s2("hello s2");
    
    bool test = 1>2;

    cout<<a; // output a variable
    cout<<endl; // output a new line
    cout<<"Hello World"; // output a string
    
    cout<<"Hey "<<s1 <<" "<<b <<endl; // multiple outputs
    
    if(a == 1){ // self explainatory
        cout<<"a is 1"<<endl;
    }
    else if(a!=1){ // self explainatory
        cout<<"a is not 1" <<" it is actually"<<a<<endl;
    }
    else{
        cout<<"a is "<<a<<endl;
    }
    
    int d[3] = {1, 2, 3};
    
    for(int i = 0; i<3; ++i){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    for(auto i:d){
        cout<<i<<" ";
    }
    
}
