/*
  board.c
  ゲーム版を表示
  2019.6.18
*/

#include<stdio.h>

int main(){
    int board[9][9];
    int i,j;
    for(i = 0; i < 9;i++){
        for(j = 0;j < 9;j++){
            if(i == j){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
