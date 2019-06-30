#include <bits/stdc++.h>
using namespace std;

long long pow(long long a){
    if(a == 1){
        return 1;
    }else{
        return a * pow(a-1);
    }
}

int main(){
    
    int n; cin >> n;
    cout << pow(n) << endl;

    return 0;
}