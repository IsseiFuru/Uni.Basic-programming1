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

    if(score >= 90){//90点以上
        printf("秀\n");
    }else{//90点未満80未満
        if(score >= 80){
            printf("優\n");
        }else{//80点未満70以上
            if(score >= 70){
                printf("良\n");
            }else{//70点未満60点以上
        if(score >= 60){
            printf("可\n");
        }else{//60点以下
            printf("不可\n");
        }
            }
        }
    }
    return 0;
}
