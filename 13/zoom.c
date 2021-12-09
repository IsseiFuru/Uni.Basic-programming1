/*
  zoom.c
  円が大きくなる
  2019.6.19
*/

#include<stdio.h>
#include<handy.h>

#define WINDOW 400//ウィンドウのサイズ
#define X 200//中心の座標

int main(){
    int r;//半径
    HgOpen(WINDOW,WINDOW);

    for(r = 0;r <= 300;r +=5){//5ずつ半径が増える
        HgClear();//円が消える
        HgCircle(X,X,r);//円を描く
        HgSleep(0.05);//0.05秒間ずつ動く
    }
    HgGetChar();
    HgClose();
    return 0;
}
