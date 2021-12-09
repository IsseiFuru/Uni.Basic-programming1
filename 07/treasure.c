/*
  treasure.c
  宝箱を開けてみる
  2019.5.29
*/

#include<stdio.h>

int main(){
    int box;//選んだ宝箱の番号

    do {
        printf("宝箱が3つある!どれをあけますか?(1か2か3): ");
        scanf("%d", &box);

        if(box == 1){
            printf("宝箱は罠だった\n");
            printf("敵が現れた\n");
        }if(box == 2){
            printf("あなたは宝箱を手にいれた\n");
        }if(box == 3){
            printf("あなたは宝箱を手にいれた\n");
        }
    }while(box <= 0 || 3 < box);
    return 0;
}
