#include<bits/stdc++.h>
#include<vector>

using namespace std;

int sum(int x, int y);

int main(){
    
    int N;
    cin >> N;

    int ans = 0;

    vector<int> n(N);
    for(int i = 0; i < N; i++){
        cin >> n[i];
    }

    bool isEven = true;
    while(true){
        for(int i = 0; i < N; i++){
            if(n[i] % 2 == 1){
                isEven = false;
            }
        }

        if(isEven){
            break;
        }else{
            ++ans;
            for(int i = 0; i < N; i++){
                n[i] /= 2;
            }
        }
    }
 

    cout << ans << endl;

    return 0;
}

