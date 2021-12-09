/*
  one.c
  両方1だったら反応するやつ
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number1,number2;

    printf("1つめの値: ");//1st
    scanf("%d", &number1);

    printf("2つめの値: ");//2nd
    scanf("%d", &number2);

    if(number1 == 1){
        if(number2 == 1){
            printf("one!\n");
        }
    }
    return 0;
}
