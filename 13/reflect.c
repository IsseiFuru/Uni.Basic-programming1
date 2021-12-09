/*
  reflect.c
跳ね返り続ける
2019.6.19
*/

#include<stdio.h>
#include<handy.h>

#define WINDOW 400
#define R 50

int main(){
    int x;  // 中心のx座標
    int v;  // x方向の速度[ピクセル/フレーム]
    
    HgOpen(WINDOW, WINDOW);

    v = 5;
    for (x = 0; x >= 0; x += v) {
        HgClear();//円を消す
        HgCircle(x, WINDOW / 2, R);//円を描く
        HgSleep(0.05);
        
        if (x >= WINDOW) {
            v = -5;//左に移動する
        }if(x <= 0){//右に移動する
            v = 5;
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
