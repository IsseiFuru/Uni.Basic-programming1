/*
  rangekai.c
  最小値,最大値の範囲を判定する
  2019.6.6
*/

#include<stdio.h>

int main(){
    int num1 = 0;//1st
    int num2 = 0;//2nd
    int han;//判定する数値
    int max;//最大値
    int min;//最小値

    printf("1つ目の範囲値: ");
    scanf("%d", &num1);//1st

    printf("2つ目の範囲値: ");
    scanf("%d", &num2);//2nd

    if(num1 > num2){//1つ目が2つ目より大きい時
        max = num1;
        min = num2;
    }else{//2つ目が1つ目より大きい時
        max = num2;
        min = num1;
    }

    do{
        printf("判定値: ");
        scanf("%d", &han);
    }while(max > han && min < han);//最小値未満最大値超で

    return 0;
}
    
