/*
  add.c
  入力された2つの整数の和を表示する
  2019.5.21 Issei Furutani
*/

#include<stdio.h>

int main(){
    

    int number1;
    int number2;

    printf("1st number: ");
    scanf("%d", &number1);

    printf("2nd number: ");
    scanf("%d", &number2);

    printf("%d\n",number1 + number2);
    
    return 0;
}
