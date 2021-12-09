/*
  sign.c
  整数を判別する
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number;

    printf("input number: ");
    scanf("%d", &number);
    
    if(number < 0)printf("マイナス\n");
    if(number == 0)printf("ゼロ\n");
    if(number > 0)printf("プラス\n");
    return 0;
}
    
         
