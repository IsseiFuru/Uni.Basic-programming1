/*
  pyramid.c
  ピラミッド
  g1954237 古谷一晴
  2019.6.11
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int r;//半径
    int num;//入力数値
    int i;//カウント数

    printf("整数を入力してください: ");
    scanf("%d", &num);//整数を入力

    r = 600 / num / 2;//半径を計算
    int x = r;//一番左下の円のx座標
    int y = r;//一番左下の円のy座標
    
    HgOpen(600,600);

    for(;0 < num;){//上にずれる
        for(i = 1;i < num;i++){//横にずれる
            HgCircle(x,y,r);//円を描く
            x += r*2;//xをずらす
        }
        HgCircle(x,y,r);//円を描く
        y += r*2;//yをずらす
        x = r;
        num--;
        i = 0;
    }
    HgGetChar();
    HgClose();
    return 0;
}
