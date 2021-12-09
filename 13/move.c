/*
move.c
円を動かす
2019.6.19
*/

#include<stdio.h>
#include<handy.h>

#define WINSIZE 400
#define RAD 50

int main(){
    int x;//中心x座標

    HgOpen(WINSIZE,WINSIZE);

    for(x = 0;x < WINSIZE; x += 5){
        HgClear();//ウィンドウを消去する
        HgCircle(x,WINSIZE / 2,RAD);
        HgSleep(0.05);//0.05秒間実行を止める
    }

    HgGetChar();
    HgClose();
    return 0;
}
