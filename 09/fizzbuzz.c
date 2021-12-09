/*
  fizzbuzz.c
  正の整数値
  2019.6.7
*/

#include<stdio.h>

int main(){
    int num;//入力させる数
    int i = 1;//カウント数

    printf("imput number: ");
    scanf("%d", &num);

    for(;num >= i;i++){
        if(i % 3 == 0){//3の倍数の時
            if(i % 15 == 0){//かつ15の倍数の時
                printf("fizzbuzz\n");
            }else{
                printf("fizz\n");
            }
        }else if(i % 5 == 0){//5の倍数の時
            if(i % 15 == 0){//かつ15の倍数の時
                printf("fizzbuzz\n");
            }else{
                printf("buzz\n");
            }
        }else{//それ以外の数の時
            printf("%d\n",i);
        }
    }
    return 0;
}
