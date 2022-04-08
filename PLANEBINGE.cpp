#include <bits/stdc++.h>

using namespace std;

int main() {
    int flight_length;
    int movies;

    int T;
    cin >> T;

    while (T--) {
        cin >> movies;
        cin >> flight_length;

        int temp;
        vector<int> movie_lengths;
        
        for (int i = 0; i < movies; ++i) {            
            cin >> temp;
            movie_lengths.push_back(temp);
        }

        set<int> s;
        bool found = false;
        for (int i = 0; i < movies; ++i) {
            if (s.find(flight_length - movie_lengths[i]) != s.end()) {
                // found
                cout << "True" << endl;
                found = true;
                break;
            }
            else {
                s.insert(movie_lengths[i]);
            }
        }
        
        if (!found) {
            cout << "False" << endl;   
        }
    }

}
