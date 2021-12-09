/*
  findkey.c
  IDと鍵を表示
  2019.6.13
*/

#include<stdio.h>


int main(){
    int id[10] = {2,3,5,7,11,13,17,19,23,29};//ID
    int key[10] = {114,194,223,315,326,404,514,634,777,819};//鍵
    int num;//ID入力用
    int i;//変数

    printf("IDを入力してください: ");
    scanf("%d", &num);//IDを入力

    for(i = 0;i < 10;i++){//1個ずつ確認する
        if(id[i] == num){
            printf("ID%dの鍵の番号は%dです。\n",id[i],key[i]);
            break;
        }
    }
    if(id[i] != num){
        printf("見つかりません\n");
    }
    return 0;
}
