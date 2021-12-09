/*
  plot.c
  点線いっぱい
  2019.6.5
*/

#include<stdio.h>
#include<handy.h>

int main(){
    HgOpen(600,400);

    int x = 0;
    int y = x / 2 + 30;

    for(;x < 600;x += 10){
        y = x / 2 + 3;
        HgCircle(x,y,1);
    }
    HgGetChar();
    HgClose();
    return 0;
}
