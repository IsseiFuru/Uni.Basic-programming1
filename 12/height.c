/*
  height.c
  身長を表示する
  2019.6.12
*/

#include<stdio.h>

int main(){
    int height[5] = {163,157,176,180,166};//身長
    int i;//カウンタ変数
    
    printf("番号? ");
    scanf("%d", &i);//整数を入力する
    printf("%d番の身長は%dcmです。\n",i,height[i]);
//番号とその身長を出す
    return 0;
}
