/*
  Game&Watch.c
  最終課題:避けるゲーム
  g1954237 古谷一晴
*/

#include<stdio.h>
#include<handy.h>

#define WINDOWSIZE 400
#define RAD 50

int main(){
    hgevent *event;
    int key;
    int x,y;
    int i,j;

    HgOpen(WINDOWSIZE,WINDOWSIZE);

    HgSetFont(HG_G,40);
    HgText(200,200,"Plese Space key");
    for(;;){
        key = HgGetChae();
        printf("key = %d\n", key);
        if(key == " ") break;
    }
    HgClear();
    x = 130;
    y = 130;
    
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            HgCircle(x,y,RAD);
            x += 70;
        }
        y += 70;
    }
    HgClose();
}
