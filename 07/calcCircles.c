/*
  calcCircles.c
  2019.5.21 Issei Furutani
*/

#include<stdio.h>
#include<handy.h>

int main(){
    HgOpen(400,400);

    int hankei = 120;
    int x =240;
    int y =210;

    int hankei2 = 120 * 2 / 3;
    int x_2 = x - hankei + hankei * 2 / 3;

    int hankei3 = hankei2 / 2;
    int x_3 = x + hankei - hankei3;
    

    HgCircle(x,y,hankei);//1st
    
    HgCircle(x_2,y,hankei2);//2nd

    HgCircle(x_3,y,hankei3);//3rd

    HgGetChar();
    HgClose();
    return 0;
}
