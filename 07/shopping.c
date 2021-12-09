/*
  shopping.c
  金額,値段,個数
  g1954237 古谷一晴
  2019.5.29
*/

#include<stdio.h>

int main(){
    int temoti,cost,kosu;
    printf("手持ちの金額: ");
    scanf("%d", &temoti);//手持ちの金額

    printf("単価: ");
    scanf("%d", &cost);//単価

    printf("個数: ");
    scanf("%d", &kosu);//個数

    int kekka = temoti - cost * kosu;
    int max = temoti / cost;

    if(kekka >= 0){
        printf("買える。おつりは%d円。\na",kekka);
    }else{
        printf("買えない。%d個までなら買える。\n",max);
    }
    return 0;
}
            
    
