/*
  fizz.c
  3の倍数で
  2019.6.5
*/

#include<stdio.h>

int main(){
    int num = 0;

    printf("input number: ");
    scanf("%d", &num);//整数を入力する
    
    int i;//カウント

    for(i = 1;i <= num;i++){
        if(i % 3 != 0){//あまりが0出ない時
            printf("%d\n",i);
        }else{//それ以外
            printf("fizz\n");
        }
    }
    return 0;
}
