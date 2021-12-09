/*
  sum.c
  総和を求める
  2019.6.1
*/

#include<stdio.h>

int main(){
    int number =0;
    int sum = 0;
    do{
        printf("imput number: ");
        scanf("%d", &number);
    }while(number < 0);
    
    while(number > 0){
        sum += number;
        number --;
    }
    
    printf("sum = %d\n",sum);
    
    return 0;
}
