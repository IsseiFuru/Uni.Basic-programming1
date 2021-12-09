/*
  ksu.c
  縦と横にksuを表示させる
  2019.6.8
*/

#include<stdio.h>

int main(){
    int ksu;
    int tate;
    int yoko;

    printf("回数を入力をしてください: ");
    scanf("%d", &ksu);//整数を入力
    

    for(tate = 0;tate < ksu;tate++){//縦
        for(yoko = 1;yoko < ksu;yoko++){//横
            printf("KSU ");
        }
        printf("KSU \n");
        }
    return 0;
}
