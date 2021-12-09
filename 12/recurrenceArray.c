/*
  recurrenceArray.c
  漸化式
  2019.6.13
*/

#include<stdio.h>

int main(){
    int an[15] = {1};//a0
    int i = 0;

    for(i = 0;15 > i;i++){
        an[i + 1] = 3 * an[i] +2;//計算
    }
    for(i = 14;0 <= i;i--){
        printf("%d\n",an[i]);//逆順に表示
    }
    return 0;
}       
