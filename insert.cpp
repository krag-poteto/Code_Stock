#include <bits/stdc++.h>
using namespace std;

int trace(int a[],int n){
    for(int i = 0; i < n; i++){
        if(i > 0)   printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int insert(int a[], int n){
    int i, j, v;
    for(int i = 0; i < n; i++){
        v = a[i];
        j = i-1;
        while(j >= 0 && a[j] > v){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
    }
}

int main(){

    int N;  cin >> N;
    int a[100];
    for(int i = 0; i < N; ++i){
        cin >> a[i];
    }
    trace(a, N);
    insert(a, N);
    trace(a, N);

    return 0;
}