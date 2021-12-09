/*
  checkHit.c
  衝突確認
  2019.5.29
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int x = 200;//1st
    int y = 200;//1st
    int r = 150;//1st
    int x2,y2,r2;//2nd

    printf("input x: ");
    scanf("%d", &x2);//2つめのx

    printf("input y: ");
    scanf("%d", &y2);//2つめのy

    printf("input r: ");
    scanf("%d", &r2);//2つめの半径
    
    HgOpen(400,400);

    HgCircle(x,y,r);

    int dis = (x - x2)*(x - x2)+(y - y2)*(y - y2);//中心の距離
    int R = r + r2;//半径の合計
    if(dis < R*R){//ぶつかっている場合
        HgSetFillColor(HG_RED);
    }else{//ぶつかってない場合
        HgSetFillColor(HG_BLUE);
    }
    HgCircleFill(x2,y2,r2,1);
    
    HgGetChar();
    HgClose();
    return 0;
}
