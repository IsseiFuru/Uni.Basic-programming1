/*
  xymove.c
  斜めに移動する円
  2019.6.20
*/

#include<stdio.h>
#include<handy.h>

#define WINDOW 400//ウィンドウサイズ
#define R 50//半径

int main(){
    int x = 0;//xとy

    HgOpen(WINDOW,WINDOW);

    for(x = 0;x <= WINDOW;x += 5){
        HgClear();//消える
        HgCircle(x,x,R);
        HgSleep(0.05);//0.05秒後
        
    }
    HgGetChar();
    HgClose();
    return 0;
}
            
