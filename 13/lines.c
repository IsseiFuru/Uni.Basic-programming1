/*
  mouse.c
  マウスがクリックされた座標を表示し線を引く
  2019.6.26
*/

#include<stdio.h>
#include<handy.h>

#define BUTTON_X 300
#define BUTTON_Y 350
#define BUTTON_WIDTH 80
#define BUTTON_HEIGHT 30

int main(){
    hgevent *event;//Handyのイベントを扱うための変数
    int x1,y1;//クリックされた座標1
    int x2,y2;//クリックされた座標2

    HgOpen(400,400);
    HgSetEventMask(HG_MOUSE_DOWN);//クリックのみにするための設定

    HgBox(BUTTON_X,BUTTON_Y,BUTTON_WIDTH,BUTTON_HEIGHT);

    for(;;){
        event = HgEvent();//マウスクリックを待つ
        x1 = event->x;//クリックされたx座標を取り出す
        y1 = event->y;//クリックされたy座標を取り出す
        printf("clicked(%d,%d)\n",x1,y1);

        if((x1 > 300 && x1 < 380) && (y1 > 350 && y1 < 380)){
            HgClear();//ウィンドウを消す
            HgBox(BUTTON_X,BUTTON_Y,BUTTON_WIDTH,BUTTON_HEIGHT);
            continue;
        }
        
        event = HgEvent();//マウスクリックを待つ
        x2 = event->x;//クリックされたx座標を取り出す
        y2 = event->y;//クリックされたy座標を取り出す
        printf("clicked(%d,%d)\n",x2,y2);
        
        if((x2 > 300 && x2 < 380) && (y2 > 350 && y2 < 380)){
            HgClear();//ウィンドウを消す
            HgBox(BUTTON_X,BUTTON_Y,BUTTON_WIDTH,BUTTON_HEIGHT);
            continue;
        }else{
            HgLine(x1,y1,x2,y2);//線を引く
        }
    }
    
    HgClose();
    return 0;
}
