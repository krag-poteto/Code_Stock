#include <bits/stdc++.h>
using namespace std;

#define N 6

int main(){
    int a; cin >> a;
    vector<int> c(N);
    for(int i = 0; i < N; i++){
        cin >> c[i];
    }

    int ans = 0;
    int coin[6] = {1, 5, 10, 50, 100, 500};
    for(int i = N-1; i >= 0; i--){
        int cnt = min(a/ coin[i], c[i]);

        a -= cnt*coin[i];
        ans += cnt;
    }

    cout << ans << endl;
    return 0;
}