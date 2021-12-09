/*
  absolute.c
  2019.5.29
*/

#include<stdio.h>

int main(){
    int number;
    
    printf("input number: ");
    scanf("%d", &number);

    if(number < 0){
        printf("%d\n",-number);
    }else{
        printf("%d\n",number);
    }

    return 0;
}
