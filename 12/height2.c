/*
   height2.c
   身長を表示する改
   2019.6.12
*/

#include<stdio.h>

int main(){
    int height[5] = {163,157,176,180,166};//身長
    int i;//カウンタ変数

    do{
        printf("番号? ");
        scanf("%d", &i);//整数を入力する
    } while(i < 0 || i > 4);//0から4の数字の時
    printf("%d番の身長は%dcmです。\n",i,height[i]);
    
    return 0;
}
