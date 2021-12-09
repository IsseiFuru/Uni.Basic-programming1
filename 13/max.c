/*
  max.c
  入力した整数から最大値を選ぶ
  g1954237 古谷一晴
  2019.6.18
*/

#include<stdio.h>

int main(){
    int num[100];//整数
    int i;//カウンタ変数
    int kosu;//データの個数

    printf("データの個数を入力してください: ");
    scanf("%d", &kosu);//個数

    for(i = 0;i < kosu;i++){
        printf("整数を入力してください: ");
        scanf("%d", &num[i]);//一個一個に整数を与える
    }
    int max = num[0];//最大値

    for(i = 1;i < kosu;i++){
        if(num[i] > max)//整数が最大値より大きい時
            max = num[i];//最大値を置き換える
    }
    printf("最大値:%d\n",max);//最大値を表示する
    return 0;
}
