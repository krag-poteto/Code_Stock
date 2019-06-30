//累積和1(ARC098A問題)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;  cin >> N;
    string s;   cin >> s;

    vector<int> cntW(N+1, 0), cntE(N+1, 0);
    for(int i = 0; i < N; i++){
        cntW[i+1] += cntW[i];
        if(s[i] == 'W') cntW[i+1]++;

        cntE[i+1] += cntE[i];
        if(s[i] == 'E') cntE[i+1]++;  
    }

    int ans = 99999999;
    for(int i = 0; i < N; i++){
        int now = cntW[i] + (cntE[N] - cntE[i+1]);
        if(ans > now)   ans = now;
    }

    cout << ans << endl;

    return 0;
}