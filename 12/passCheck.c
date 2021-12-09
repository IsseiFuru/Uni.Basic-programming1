/*
  passcheck.c
  合格者発表
  2019.6.13
*/

#include<stdio.h>

int main(){
    int pass;//合格点
    int i;//変数
    int count = 0;//合格者を数える
    int score[10] = {66,98,56,48,73,35,87,60,52,65};//点数

    do{
        printf("合格点を入力してください: ");
        scanf("%d", &pass);//合格点を入力
    }while(pass < 0 || pass > 100);//0点以上100以下まで入力

    for(i = 0;i < 10;i++){
        if(score[i] >= pass){
            count++;//合格点超えならカウントする
        }
    }
    printf("合格者: %d人\n",count);//合格人数発表

    return 0;
}
