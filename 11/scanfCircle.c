/*
  scanfCircles.c
  2019.5.22
*/

#include<stdio.h>
#include<handy.h>

int main(){

    int x;
    int y;
    int r;

    //xの値入力
    printf("中心のx座標: ");
    scanf("%d", &x);

    //yの値入力
    printf("中心のy座標: ");
    scanf("%d", &y);

    //rの値入力
    printf("半径: ");
    scanf("%d", &r);

    HgOpen(400,400);

    HgCircle(x,y,r);

    HgGetChar();
    HgClose();
    return 0;
}

    
