/*
   height3.c
   身長を表示する改二
   2019.6.12
*/

#include<stdio.h>

int main(){
    int height[54405];//身長
    int i;//カウンタ変数

    height[54400] = 163;
    height[54401] = 157;
    height[54402] = 176;
    height[54403] = 180;
    height[54404] = 166;
    
    do{
        printf("番号? ");
        scanf("%d", &i);//整数を入力する
    } while(i < 54400 || i > 54404);//54400から54404の時
    printf("%d番の身長は%dcmです。\n",i,height[i]);

    return 0;
}
