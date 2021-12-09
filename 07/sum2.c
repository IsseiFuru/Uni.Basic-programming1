/*
  sum2.c
  合計を計算
  2019.6.6
*/

#include<stdio.h>

int main(){
    int sum = 0;//合計
    int num;

    for(;;){
        printf(" ＋ ");
        scanf("%d", &num);//整数を入力
        if(num == 0) break;//0の時終わる
        sum += num;
    }
    printf("合計は%d\n",sum);
    return 0;
}

        
