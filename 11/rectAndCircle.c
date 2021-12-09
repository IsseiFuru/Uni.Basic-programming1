/*
  rectAndCircle
  g1954237 Issei Furutani
  2019.5.16
*/

#include<stdio.h>
#include<handy.h>

int main(){
    HgOpen(600,400);

    int x_boxGap;
    int y_boxGap;

    x_boxGap = 600 - 300;
    y_boxGap = 400 - 300;

    HgSetFillColor(HG_BLUE);
    HgBoxFill(x_boxGap / 2,y_boxGap / 2,300,300,1);

    HgSetFillColor(HG_YELLOW);
    HgCircleFill(600 / 2,400 / 2,300 / 2,1);
    
    HgGetChar();
    HgClose();
    return 0;
}
