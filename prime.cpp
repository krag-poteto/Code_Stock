#include <bits/stdc++.h>
using namespace std;

#define MAX_N (1e6) + 1

int main(){
    //テーブル作成
    vector<bool> eratos(MAX_N, true);
    eratos[0] = eratos[1] = false;
    for(int i = 2; i * i < MAX_N; i++){
        if(eratos[i]){
            for(int j = 2; j*j < MAX_N; j++){
                eratos[i*j] = false;
            }
        }
    }

    int n, input, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        if(eratos[input]){
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}