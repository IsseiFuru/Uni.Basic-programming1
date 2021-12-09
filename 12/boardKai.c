/*
  boardKai.c
  ランダムでビンゴ
  g1954237 古谷一晴
  2019.6.19
*/

#include<stdio.h>
#include<stdlib.h>//rand関数
#include<time.h>//time関数

int main(){
    int board[9][9] = {};//0は駒なし、1は駒あり、初期は全て0
/*
  配列に初期値を代入する際に{}の中に何も書かなければ
  すべての要素に0を代入することができる
*/
    int x,y;//座標
    int koma;//駒の個数のカウンタ変数
    int i,j;//カウンタ変数

    srand(time(NULL));//乱数を現在時刻で初期化する

    koma = 0;
    do{
        x = rand() % 9;//xを0~8の乱数値
        y = rand() % 9;//yを0~8の乱数値
        if(board[x][y] == 0){//(x,y)の位置に駒がなければ
            board[x][y] = 1;//駒ありにする
            koma++;//置いた駒の個数を1増やす
        }
    }while(koma< 20);//20個まで繰り返す

    //盤を表示する
    for(i = 0;i < 9;i++){
        for(j = 0;j < 9;j++){
            printf("%d",board[i][j]);
        }
        printf("\n");//1行分表示したら改行する
    }
    j = 0;
    int k;//1を数えるカウンタ変数
    
    for(i = 0;i < 9;i++){//横の1を数える
        k = 0;
        for(j = 0;j < 9;j++){
            if(board[i][j] == 1){//1なら
                k++;
            }else{//0なら
                k = 0;
            }if(k == 4){//4連続の時
                printf("BINGO!!\n");
            }
        }
    }

    for(j = 0;j < 9;j++){//縦の1を数える
        k = 0;
        for(i = 0;i < 9;i++){
            if(board[i][j] == 1){//1なら
                k++;
            }else{//0なら
                k = 0;
            }if(k == 4){//4連続の時
                printf("BINGO!!\n");
            }
        }
    }
    return 0;
}
