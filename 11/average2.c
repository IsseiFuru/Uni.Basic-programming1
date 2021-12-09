/*
  average2.c
  入力させて平均求める
  2019.6.6
*/

#include<stdio.h>

int main(){
    int num;//数値
    int sum = 0;//合計
    int ave = 0;//平均
    int count = 0;//数値の個数

    for(;;){
        printf("+ ");
        scanf("%d", &num);//入力
        if(num == 0) break;//0の時終了
        sum += num;//足していく
        count ++;//個数を増やす
    }
    ave = sum / count;//平均を求める
    printf("平均は%d\n",ave);
    return 0;
}

        
