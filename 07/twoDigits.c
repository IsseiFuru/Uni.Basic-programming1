/*
  twoDigits.c
  2桁の整数
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number;//値
    
    printf("input number: ");
    scanf("%d", &number);//値を入力

    if(number >= 10){//10以上の場合
        if(number < 100){//100未満の場合
            printf("2桁の値\n");
        }
    }
    return 0;
}
