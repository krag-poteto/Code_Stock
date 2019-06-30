#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std;

#define W 5
#define DELETE -1

int main(){
    while(true){
        int H;
        cin >> H;
        if(H == 0){
            break;
        }
        //盤面受け取り
        vector<vector<int>> puyo(H, vector<int>(W));
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                cin >> puyo[i][j];
            }
        }

        //石が消えるまで繰り返す
        int flag, ans = 0;
        do{
            //最初にフラグおる
            flag = false;

            //全ての地点について
            for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                    if(puyo[i][j] == DELETE){
                        continue;
                    }
                    //位置[i][j]をスタートとして
                    //色が同じである区間を求める
                    int seg;
                    for(seg = 1; j+seg < W; seg++){
                        if(puyo[i][j] != puyo[i][j+seg]){
                            break;
                        }
                        //連続区間が3以上なら消す
                        if(seg >= 3){
                            for(int k = 0; k < seg; k++){
                                //消す場合はフラグを立て、コストを加算する
                                flag = true;
                                ans += puyo[i][j+k];
                                puyo[i][j+k] = DELETE;
                            }
                        }
                    }
                }
                //DELETEになった石を上に持ち上げる
                //(バブルソートチック)
                for(int k = 0; k < H; k++){
                    for(int i = 1; i < H; i++){
                        for(int j = 0; j < W; j++){
                            if(puyo[i][j] == DELETE){
                                int tmp = puyo[i][j];
                                puyo[i][j] = puyo[i-1][j];
                                puyo[i-1][j] = tmp;
                            }
                        }
                    }
                }
            }
        }while(flag);

        cout << ans << endl;
        return 0;
    }
}

