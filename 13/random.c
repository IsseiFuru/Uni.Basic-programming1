/*
  random.c
  乱数を10個表示
  2019.6.25
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i;
    int random1;
    int random2;

    srand(time(NULL));

    for(i = 0;i < 10;i++){
        random1 = rand();
        random2 = rand();
        printf("%d\n",(random1 % 20 + 1) + (random2 % 20 + 1));
    }
    return 0;
}
