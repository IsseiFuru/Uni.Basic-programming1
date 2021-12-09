/*
  g1954237 Issei Furutani
  2019.5.15
*/

#include <stdio.h>
#include <handy.h>

int main(){
    HgOpen(400,400);//windowsize

    HgSetFillColor(HG_RED);
    HgCircleFill(120,120,100,1); //左下
    
    HgSetFillColor(HG_BLUE);
    HgCircleFill(120,280,100,1); //左上

    HgSetFillColor(HG_GREEN);
    HgCircleFill(280,280,100,1); //右上

    HgSetFillColor(HG_YELLOW);
    HgCircleFill(280,120,100,1); //右下

    HgGetChar();//何かボタンを押すやつ
    HgClose();//閉じる
    return 0;    
}
jm
