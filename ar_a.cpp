//累積和2(全国統一決定戦本戦Abundant Resources)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;  cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    vector<long long> v(N+1, 0);
    for(int i =0 ; i < N; i++){
        v[i+1] += v[i] + A[i];
    }

    for(int i = 0; i <= N; i++){
        long long max_total = 0;
        for(int j = 0; j+i <= N; j++){
            long long now = v[i+j] - v[i];
            max_total = max(max_total, now);
        }

        cout << max_total << endl;
    }

    return 0;
}