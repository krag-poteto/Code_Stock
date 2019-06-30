#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    vector<string> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    bool isRule = true;
    for(int i = 0; i < n-1; i++){
        if(s[i].back() != s[i+1].front()){
            cout << "No" << endl;
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(s[i] == s[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}