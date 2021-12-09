/*
  fibonacchi.c
  漸化式
  2019.6.13
*/

#include<stdio.h>

int main(){
    int an[20] = {1,1};//漸化式
    int i;//カウンタ変数

    for(i = 2;i < 20;i++){
        an[i] = an[i - 1]+ an[i - 2];//漸化式を計算する
        }
    for(i = 0;i < 20;i++){
        printf("%d\n", an[i]);//順々に表示する
    }
    return 0;
}
