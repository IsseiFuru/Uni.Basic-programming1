/*
  range.c
  最小値,最大値の範囲を判定する
  2019.6.6
*/

#include<stdio.h>

int main(){
    int max;//最大値
    int min;//最小値
    int num;//判定する数値

    printf("最小値: ");
    scanf("%d", &min);//最小値

    printf("最大値: ");
    scanf("%d", &max);//最大値

    do{
        printf("判定値: ");
        scanf("%d", &num);
    }while(max > num && min < num);//最小値未満最大値超で

    return 0;
}
    
