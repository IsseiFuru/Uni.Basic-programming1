/*
  boxes.c
  2019.5.26
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int x0;
    int y0;
    int nisex1;
    int nisey1;

    printf("input x0: ");
    scanf("%d",&x0);//内左下x

     printf("input y0: ");
     scanf("%d",&y0);//内左下y

     printf("input x1: ");
     scanf("%d",&nisex1);//内右上x

     printf("input y1: ");
     scanf("%d",&nisey1);//内右上y

     int x1 = nisex1 - x0;
     int y1 = nisey1 - y0;

     HgOpen(600,600);

     HgBox(x0,y0,x1,y1);

     int x_naka = (x0 + nisex1) / 2;
     int y_naka = (y0 + nisey1) / 2;

     int x0_dai = x0 * 2 - x_naka;//外左下x
     int y0_dai = y0 * 2 - y_naka;//外左下y
     int x1_dai = x1 + x_naka;//外右上x
     int y1_dai = y1 + y_naka;//外右上y
     
     HgBox(x0_dai,y0_dai,x1_dai - x0_dai,y1_dai - y0_dai);//外側

     HgLine(x0_dai,y_naka,x_naka,y0_dai);//左下線
     HgLine(x0_dai,y_naka,x_naka,y1_dai);//左上線
     HgLine(x1_dai,y_naka,x_naka,y0_dai);//右下線
     HgLine(x1_dai,y_naka,x_naka,y1_dai);//右上線

     HgGetChar();
     HgClose();
     return 0;
}
