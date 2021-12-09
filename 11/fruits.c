/*
  fruits.c
  フルーツ判定
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number;

    printf("input number: ");
    scanf("%d", &number);

    if(number % 3 == 1)printf("apple\n");//余り1の時りんご
    if(number % 3 == 2)printf("orange\n");//余り2の時オレンジ
    if(number % 3 == 0)printf("banana\n");//余り0の時バナナ

    return 0;
}
