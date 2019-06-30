#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  N ; cin >> N;
    int div = 0;
    while (N > 0)
    {
        div += N % 10;
        N /= 10;
    }

    if(N % div == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}