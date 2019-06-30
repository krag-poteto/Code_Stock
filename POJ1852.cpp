#include <bits/stdc++.h>
using namespace std;

#define INF 999999999

int main(){

    int L, n; cin >> L >> n;
    vector<int> ant(n);
    for(int i = 0; i < n; i++){
        cin >> ant[i];
    }

    //int minT = INF;
    int minT = 0;
    for(int i = 0; i < n; i++){
        minT = max(minT, min(ant[i], L-ant[i]));
    }

    int maxT = 0;
    for(int i = 0; i < n; i++){
        maxT = max(maxT, max(ant[i], L-ant[i]));
    }

    cout << minT << " " << maxT<< endl;
    return 0;
}