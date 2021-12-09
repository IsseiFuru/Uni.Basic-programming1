/*
  bigOrSmall.c
  比較
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number1,number2;

    printf("1つめの値: ");//1st
    scanf("%d", &number1);
    
    printf("2つめの値: ");//2nd
    scanf("%d", &number2);

    if(number1 > number2)//1つめが大きい
        printf("%dは%dよりも大きい\n",number1,number2);

    if(number1 < number2)//2つめが大きい
        printf("%dは%dよりも小さい\n",number1,number2);

    if(number1 == number2)//同じ数
        printf("%dは%dと等しい\n",number1,number2);

    return 0;
}
        
    
