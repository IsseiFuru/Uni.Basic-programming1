/*
  mouse.c
  マウスがクリックされた座標を表示する
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
    int x,y;//クリックされた座標

    HgOpen(400,400);
    HgSetEventMask(HG_MOUSE_DOWN);//クリックのみにするための設定

    HgBox(BUTTON_X,BUTTON_Y,BUTTON_WIDTH,BUTTON_HEIGHT);

    for(;;){
        event = HgEvent();//マウスクリックを待つ
        x = event->x;//クリックされたx座標を取り出す
        y = event->y;//クリックされたy座標を取り出す
        printf("clicked(%d,%d)\n",x,y);

        if((x > 300 && x < 380) && (y > 350 && y < 380)){
            HgClear();//ウィンドウを消す
            HgBox(BUTTON_X,BUTTON_Y,BUTTON_WIDTH,BUTTON_HEIGHT);
        }else{
            HgCircle(x,y,20);//クリックされた位置に半径20の円を描く
        }
    }
    
    HgClose();
    return 0;
}
