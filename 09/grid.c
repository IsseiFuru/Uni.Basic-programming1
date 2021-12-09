/*
  grid.c
  マス目を引く
  g1954237 古谷一晴
  2019.6.5
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int num;
    int x0 = 0;//原点
    int y0 = 0;//原点
    int x;
    int y;
    
    printf("input number: ");
    scanf("%d", &num);

    HgOpen(600,600);
    int x1 = 600 / num;//1本あたりのxの距離
    int y1 = 600 / num;//1本あたりのyの距離
    for(x = 0,y = 0;x < 600;x += x1,y += y1){
        HgLine(x,y0,x,600);//縦線
        HgLine(x0,y,600,y);//横線
    }
    HgGetChar();
    HgClose();
    return 0;
}

