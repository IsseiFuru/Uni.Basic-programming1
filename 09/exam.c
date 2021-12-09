/*
  exam.c
  テストを判定する
  2019.5.29
*/

#include<stdio.h>

int main(){
    int score;//点数

    printf("点数を入力してください: ");
    scanf("%d", &score);

    if(score >= 80){//80点以上
        printf("優\n");
    }else{//80点未満60点以上
        if(score >= 60){
            printf("可\n");
        }else{//60点以下
            printf("不可\n");
        }
    }
    return 0;
}
