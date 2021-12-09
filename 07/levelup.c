/*
 levelup.
 レベルアップ時のメッセージを表示する
 Issei Furutani 2019.5.20
*/

#include<stdio.h>

int main (){
    int level; //現在のレベル
    int hp; //体力の増加値

    level = 12; //レベル12になったとする
    hp = 34; //体力は34増える

    printf("トンヌラはレベル%dとなった!体力が%d上がった!\n",level,hp);

    return 0;
}
