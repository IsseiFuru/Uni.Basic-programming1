/*****
   WidthAndColor.c
   A simple sample of Handy Graphic
   2019.5.15 Issei Furutani
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    HgOpen(600,400);

    //left
    HgSetColor(HG_RED);
    HgBox(10,150,100,100);

    HgSetWidth(4);
    //2nd
    HgBox(130,150,100,100);
    //3rd
    HgSetColor(HG_BLUE);
    HgSetFillColor(HG_BLUE);
    HgBoxFill(250,150,100,100,1);

    HgSetWidth(1);
    //4th
    HgBox(370,150,100,100);
    //right
    HgSetFillColor(HG_BLACK);
    HgSetColor(HG_BLACK);
    HgBoxFill(490,150,100,100,1);
    
    HgGetChar();
    HgClose();
    return 0;
}
