x/*
  oddSquare.c
  奇数のみを数える
  2019.6.5
*/

#include<stdio.h>

int main(){
    int odd;

    for(odd = 1;odd < 100;odd +=2){
        printf("%d\n",odd * odd);
    }
    return 0;
}
