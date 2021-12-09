/*
  countdown.c
  カウントダウン
  2019.6.4
*/

#include<stdio.h>

int main(){
    int count;
    int repnum;

    printf("input number: ");
    scanf("%d", &repnum);

    for(;0 < repnum;repnum --){
        printf("%d\n",repnum);
    }
    return 0;
}
