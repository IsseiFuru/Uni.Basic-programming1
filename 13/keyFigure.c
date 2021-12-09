/*
  keyFigure.c
  押したキーの図形を表示する
  2019.6.25
*/

#include<stdio.h>
#include<handy.h>

int main(){
    int key;

    HgOpen(400,400);
    for(;;){
        key = HgGetChar();
        printf("key = %d\n",key);
        switch(key){
        case 'o':
            HgCircle(200,200,150); break;
        case 's':
            HgBox(100,100,200,200); break;
        case 'x':
            HgLine(100,100,300,300);
            HgLine(300,100,100,300); break;
        case ' ': break;
        }
    }
    HgClose();
    return 0;
}
