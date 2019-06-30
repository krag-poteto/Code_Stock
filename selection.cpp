#include <bits/stdc++.h>
using namespace std;

int selection(int a[], int N){
    int t,sw = 0, minj;
    for(int i = 0; i < N; i++){
        minj = 0;
        for(int j = i; j < N; j++){
            if(a[j] < a[minj]){
                minj = j;
            }
        }
        t = a[i];
        a[i] = a[minj];
        a[minj] = t;
        if(i != minj) sw++;
    }
    return sw;
}

int main(){
    int a[100], N, sw;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    sw = selection(a, N);

    for(int i = 0; i < N; i++){
        if(i > 0)  { printf(" ");   }
        printf("%d", a[i]);
    }

    printf("\n");
    printf("%d\n", sw);


    return 0;
}