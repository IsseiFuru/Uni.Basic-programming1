/*
  reverse.c
  整数を逆順に表示
  2019.6.12
*/

#include<stdio.h>

int main(){
    int number[5];
    int i = 0;

    while(i < 5){
        scanf("%d", &i);
        i ++;
    }
    i = 4;
    
    while(i >= 0){
        printf("%d\n",number[number[i]]);
        i--;
    }
    return 0;
}
