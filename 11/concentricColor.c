/*
  concentric.c
  色付き同心円
  2019.6.5
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int x = 300;
    int y = 300;
    int r;

    HgOpen(600,600);
    
    for(r = 50;r <= 250;r += 100){//50,150,250のとき青
        HgSetColor(HG_BLUE);
        HgCircle(x,y,r);
    }
    for(r = 0;r <= 250;r += 100){//100,200のとき赤
         HgSetColor(HG_RED);
          HgCircle(x,y,r);
     }
     
     HgGetChar();
     HgClose();
     return 0;
}

    

    
