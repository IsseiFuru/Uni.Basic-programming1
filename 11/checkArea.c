/*
  checkArea.c
  範囲内なら赤の円になる
  g1954237 古谷一晴
  2019.6.11
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int x;
    int y;
    int r = 50;

    printf("Xの座標を入力してください: ");
    scanf("%d", &x);

    printf("Yの座標を入力してください: ");
    scanf("%d", &y);

    HgOpen(600,400);
    HgBox(150,100,300,200);//長方形

    if(x > 150 && x < 450){
        if(y > 100 && y < 300){
            HgSetFillColor(HG_RED);//長方形内なら赤
        }
    }else{
        HgSetFillColor(HG_BLUE);//長方形内なら青
    }
    HgCircleFill(x,y,r,1);//円を描く

    HgGetChar();
    HgClose();
    return 0;
}
