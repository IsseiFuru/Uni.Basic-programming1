/*
  average3.c
  平均を計算する
  g1954237 古谷 一晴
  2019.6.15
*/

#include<stdio.h>

int main(){
    int data[100];//数値
    int i;//カウンタ変数
    int sum;//合計
    int kosu;//データの個数

    printf("データの個数を入力してください: ");
    scanf("%d", &kosu);//データの個数を入力する

    for(i = 0;i < kosu;i++){
        printf("input No.%d data: ",i);
        scanf("%d", &data[i]);//数値を入力;
        sum += data[i];//合計の計算
    }
    int ave = sum / kosu;//平均
    printf("average = %d\n",ave);
    for(i = 0;i < kosu;i++){
        if(data[i] > ave){//数値が平均を超えていたら
            printf("No.%d: %d\n",i,data[i]);
        }
    }
                
    return 0;
}
