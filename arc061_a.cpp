#include <bits/stdc++.h>
using namespace std;

int main(){

    string S;   cin >> S;
    long long ans = 0;

    for(int s = 0; s < (1 << (S.size()-1)); s++){
        string now ="";
        now += S[0];
        for(int i = 0; i < S.size()-1; i++){
            //S[i]とS[i+1]の間に＋を入れるか
            if(s & (1 << i)){
                now += "+";
            }
            now += S[i+1];
        }
        long long sum = 0;
        int pos = 0;    //数値の始まる位置
        while(now.find("+", pos) != string::npos){
            //+の位置
            int nextpos = now.find("+", pos);
            sum += stoll(now.substr(pos, nextpos-pos));
            pos = nextpos+1;
        }

        sum += stoll(now.substr(pos));
        ans += sum;
    }

    cout << ans << endl;

    return 0;
}
