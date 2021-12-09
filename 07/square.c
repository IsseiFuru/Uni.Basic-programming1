/*
  square.c
  2乗
  2019.5.30
*/

#include<stdio.h>

int main(){
    int num = 1;
    int max = 0;

    printf("input number: ");
    scanf("%d", &max);

    if(max > 0){
        while(max <= 0 || max >= num){
            int jou = num * num;//2乗
            printf("%d * %d = %d\n",num,num,jou);
            num ++;
        }
    }
    return 0;
}



        
