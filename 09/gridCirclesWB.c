/*
  gridCirclesWB.c
  白と黒の円を敷き詰める
  2019.6.11
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
    int count;//偶数か奇数か判断
    
    HgOpen(480,480);

    for(y = r;y < 480;y += r*2){//yの座標を1あげる
        for(count = 1,x = r;x < 480;count ++){
//xの座標を端まで1ずつあげる
            if(count % 2 == 0){
                HgSetFillColor(HG_BLACK);//偶数なら黒
            }else{
                HgSetFillColor(HG_WHITE);//奇数なら白
            }
            HgCircleFill(x,y,r,1);//円を描く
            x += r*2;
        }
        HgCircle(x,y,r);//円を描く
    }
    HgGetChar();
    HgClose();
    return 0;
}

    
