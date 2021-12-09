/*
  bound.c
  跳ね回る円
  g1954237 古谷一晴
  2019.6.25
*/

#include<stdio.h>
#include<handy.h>

#define WINDOW 400
#define R 50

int main(){
    int x;//x座標
    int xv = 5;//x方向の速度
    int y = 50;//y座標
    int yv = 3;//y方向の速度
    int 
    
    HgOpen(WINDOW, WINDOW);
    
    for (x = 50;; x += xv) {
        HgClear();//消える
        HgCircle(x,y,R);//円を描く
        HgSleep(0.05);//0.05秒ごと
        if(x >= WINDOW - 50){//右側の壁
            xv = -5;
        }if(x <= 50){//左側の壁
            xv = 5;
        }if(y >= WINDOW - 50){//上側の壁
            yv = -3;
        }if(y <= 50){//下側の壁
            yv = 3;
        }
        y += yv;//yに速度をたす
    }

    HgGetChar();
    HgClose();
    return 0;
}
