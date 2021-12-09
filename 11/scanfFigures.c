/*
  scanfFigures.c
  2019.5.26
*/

#include<stdio.h>
#include<handy.h>

int main(){

    int x_maru;
    int y_maru;
    int r;

    //xの値入力
    printf("中心のx座標: ");
    scanf("%d", &x_maru);

    //yの値入力
    printf("中心のy座標: ");
    scanf("%d", &y_maru);

    //rの値入力
    printf("半径: ");
    scanf("%d", &r);

    int x_box = x_maru - r;
    int y_box = y_maru - r;

    printf("正方形の左下の座標は(%d,%d)\n",x_box,y_box);

    HgOpen(400,400);

    HgCircle(x_maru,y_maru,r);
    HgBox(x_box,y_box,r*2,r*2);
    
    HgLine(x_box,y_box,x_box + r*2,y_box + r*2);//左下から右上
    HgLine(x_box,y_box + r*2,x_box + r*2,y_box);//左上から右下

    HgGetChar();
    HgClose();
    return 0;
}

    
