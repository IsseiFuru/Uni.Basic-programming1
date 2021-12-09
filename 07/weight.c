/*
  weight.c
  肥満度チェッカー
  g1954237 古谷一晴
  2019.5.19
*/

#include<stdio.h>

int main(){
    int tall,wei;//身長、体重

    printf("身長: ");
    scanf("%d", &tall);

    printf("体重: ");
    scanf("%d", &wei);

    int hyou = tall - 105;//標準体重
    int hyoumasi = hyou * 110 / 100;//標準体重の1割増
    int hyougen = hyou * 90 / 100;//標準体重の1割減

    if(wei > hyoumasi){
        printf("太りすぎです。\n");
    }
    if(wei < hyougen){
        printf("やせ過ぎです。\n");
    }
    if(wei <= hyoumasi){
        if(hyougen <= wei){
            printf("ちょうどよいです。\n");
        }
    }
    return 0;
}

