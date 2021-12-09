/*
  factorial.c
  nの階乗
  2019.6.4
*/

#include<stdio.h>

int main(){
    int num = 0;
    int fac = 1;
    
    do{
        printf("input number: ");
        scanf("%d", &num);
    }while(num < 0);

    int num2 = num;

    while(num > 0){
        fac = fac * num;
        num --;
    }
    printf("%d! = %d\n",num2,fac);

    return 0;
}
