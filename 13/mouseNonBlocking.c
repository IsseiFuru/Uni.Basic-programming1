/*
  mouseNonBlocling.c
  マウスがクリックされた座標を表示する
  2019.7.1
*/

#include<stdio.h>
#include<handy.h>

#define WINDOW 400
#define RAD 50

int main(){
    hgevent *event; //Handyのイベントを扱うための変数
    int x,y; //クリックされた座標
    int cx = 0; //円の中心のx座標
    int vx = 5; //円の速度

    HgOpen(WINDOW,WINDOW);
    HgSetEventMask(HG_MOUSE_DOWN); //マウスクリックのみを検出するように設定

    for(;;){
        HgClear();
        HgCircle(cx,WINDOW / 2,RAD);
        event = HgEventNonBlocking(); //マウスクリックを検出する
        if(event != NULL){ //マウスがクリックされた
            x = event->x; //クリックされたx座標を取り出す
            y = event->y; //クリックされたy座標を取り出す
            printf("pressed(%d,%d)\n",x,y);
            if(RAD*RAD >= (cx - x)*(cx - x) && y >= 150 && y <= 250){
                HgSetFillColor(HG_RED);
                HgCircleFill(cx,WINDOW / 2,RAD,1);
            }
        }
        cx += vx;
        if(cx <= 0 || WINDOW <= cx) vx *= -1;
        HgSleep(0.05);
    }

    HgClose();
    return 0;
}
