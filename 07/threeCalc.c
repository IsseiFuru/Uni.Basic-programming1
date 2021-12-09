/*
  threeCalc.c
  2019.5.22
*/

#include<stdio.h>

int main(){
    int number1;
    int number2;
    int number3;

    printf("1st number: ");
    scanf("%d", &number1);

    printf("2nd number: ");
    scanf("%d", &number2);

    printf("3rd number: ");
    scanf("%d", &number3);
    printf("answer = %d\n",(number1+number2)*number3);

    return 0;
}


    
