/*
  board2.c
  ゲーム版を表示
  2019.6.18
*/

#include<stdio.h>

int main(){
    int board[9][9];//駒
    int i,j;//カウンタ変数
    for(i = 0; i < 9;i++){//横
        for(j = 0;j < 9;j++){//縦
            if(i == j || i + j == 8){//斜め
                printf("1");
            }else{//その他
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
