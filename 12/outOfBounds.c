/*
  outOfBounds.c
  配列の添字の範囲を超えてみる
  2019.6.12
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[10];
    int max;//アクセスする要素番号の最大値
    int i;//カウンタ変数

    printf("input max number: ");
    scanf("%d", &max);

    for (i = 0; i < max; i++) {
        array[i] = i;
        printf("%d\n", array[i]);
    }

    exit(0);
}
