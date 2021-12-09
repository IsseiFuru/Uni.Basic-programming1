/*
  scanf.c
  scanfで値を読み取る
  Issei Furutani 2019.5.21
*/

#include<stdio.h>

int main(){
    int value; //入力値を格納するための変数
    printf("input number: ");
    scanf("%d",&value); //標準入力から整数値を読み取る
    printf("%d\n",value); //入力された値をそのまま表示してみる
    return 0;
}
