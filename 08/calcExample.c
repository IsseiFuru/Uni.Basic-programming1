/*
  calcExample.c
  2019.5.22
*/

#include<stdio.h>

int main(){
    int value = 2;
    int answer = value * 3 + 4;

    printf("answer = %d\n",answer);

    value = 4;
    answer = value * 3 + 4;
    printf("answer = %d\n",answer);

    return 0;
}
