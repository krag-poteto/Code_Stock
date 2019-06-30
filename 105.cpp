#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = (b-a) * (b-a+1)/2 - b;

    cout << ans << endl;
    
    return 0;
}