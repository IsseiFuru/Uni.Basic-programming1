/*
  concentric.c
  同心円
  2019.6.5
 */

#include<stdio.h>
#include<handy.h>

int main(){
    int x = 300;
    int y = 300;
    int r;
    
    HgOpen(600,600);

    for(r = 50;r <= 250;r += 50){
        HgCircle(x,y,r);
    }
    HgGetChar();
    HgClose();
    return 0;
}
