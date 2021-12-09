/*
  helloCount.c
  helloカウント
  2019.5.30
*/

#include<stdio.h>

int main(){
    int num = 1;
    while(num < 8){
        printf("Hello World! %d回目\n",num);
        num ++;
    }

    return 0;
}
