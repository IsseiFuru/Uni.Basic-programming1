/*
  circles.c
  円をたくさん書く
  2019.6.19
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int x;
    int y;
    int rad = 80;
    int winsize = 400;

    HgOpen(winsize,winsize);

    for(x = rad;x < winsize;x += rad){
        for(y = rad;y < winsize;y += rad){
            HgCircle(x,y,rad);
        }
    }

    HgGetChar();
    HgClose();
    return 0;
}
