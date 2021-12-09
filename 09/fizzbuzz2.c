/*
  fizzbuzz.c
  正の整数値
  2019.6.7
*/

#include<stdio.h>

int main(){
    int num;
    int i = 1;

    printf("imput number: ");
    scanf("%d", &num);

    for(;num >= i;i++){
        if(i % 3 == 0){
                printf("fizz\n");
        }
        if(i % 5 == 0){
            printf("buzz\n");
        }
        if(i % 15 == 0){
            printf("fizzbuzz\n");
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}
