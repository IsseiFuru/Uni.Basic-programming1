/*
  accelerate.c
  等加速度運動
  2019.6.19
*/

#define WINDOW 400//画面サイズ
#define RAD 50//半径
#define X 200//xの座標

#include<stdio.h>
#include<handy.h>

int main(){
    int y;//yの座標
    int v = 2;//速度

    HgOpen(WINDOW,WINDOW);

    for(y = 400;y > -100;y -= v){
        HgClear();//消える
        HgCircle(X,y,RAD);//円を描く
        HgSleep(0.05);//0.05秒ごと
        v += 2;//速度を増す
    }
    HgGetChar();
    HgClose();
}

