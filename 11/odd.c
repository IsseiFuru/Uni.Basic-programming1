/*
  odd.c
  奇数判定
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number;
    
    printf("input number: ");
    scanf("%d", &number);

    if(number % 2 == 1){
        printf("odd\n");
    }
    return 0;
}
