/*
  gridCircles.c
  円を敷き詰める
  2019.6.10
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int num;
    
    printf("回数を入力してください");
    scanf("%d", &num);//整数を入力
    
    int r = 480 / 2 / num;
    int x = r;
    int y = r;
    
    HgOpen(480,480);

    for(y = r;y < 480;y += r*2){//yの座標を1あげる
        for(x = r;x < 480;x += r*2){//xの座標を端まで1ずつあげる
            HgCircle(x,y,r);//円を描く
        }
        HgCircle(x,y,r);//円を描く
    }
    HgGetChar();
    HgClose();
    return 0;
}

    
