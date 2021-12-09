/*
  calcGaps.c
  draw two rectangles by calculation
  g1954237 Issei Furutani
  2019.5.16
*/

#include <stdio.h>
#include <handy.h>

int main(){
    HgOpen(600,480);

    int x_Dist; //横方向の余白
    int x_Gap; //横方向の余白を1:2:3で配分した時の1つ
    int x2; //2つ目の正方形のx座標

    x_Dist = 600 - 114 * 2;
    x_Gap = x_Dist / 6;
    x2 = x_Gap + 114 + x_Gap * 2;

    int y_Dist; //縦方向の余白
    int y_Gap; //縦方向の余白を1:2で配分した時の1つ

    y_Dist = 480 - 114;
    y_Gap = y_Dist / 3;
    
    HgBox(x_Gap,y_Gap * 2,114,114); //leftbox

    HgBox(x_Gap * 3 + 114,y_Gap * 2,114,114); //rightbox
    

    HgGetChar();
    HgClose();
    return 0;
}
