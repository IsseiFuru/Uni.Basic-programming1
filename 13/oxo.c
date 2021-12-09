/*
  oxo.c
  3目並べ
  2019.6.26
*/

#include<stdio.h>
#include<handy.h>

int main(){
    hgevent *event;
    int x1,y1;
    int x2,y2;
    int i;
    int j,k;
    int masu[3][3];
    
    HgOpen(300,300);
    HgSetEventMask(HG_MOUSE_DOWN);

    HgLine(100,0,100,300);
    HgLine(200,0,200,300);
    HgLine(0,100,300,100);
    HgLine(0,200,300,200);
    
    for(i = 0;i < 9;i++){
        for(j = 0;j < 3;j++){
            for(k = 0;k < 3;k++){
                if(i % 2 == 0){
                    event = HgEvent();
                    x1 = event->x;
                    y1 = event->y;
            
                    if(masu[j][k] != 1 &&  masu[j][k] != 2){
                        if(x1 > 0 && x1 < 100 && y1 > 0 && y1 < 100){
                            HgCircle(50,50,30);
                            masu[0][0] = 1;
                        }
                        if(x1 > 0 && x1 < 100 && y1 > 100 && y1 < 200){
                            HgCircle(50,150,30);
                            masu[0][1] = 1;
                        }
                        if(x1 > 0 && x1 < 100 && y1 > 200 && y1 < 300){
                            HgCircle(50,250,30);
                            masu[0][2] = 1;
                        }
                        if(x1 > 100 && x1 < 200 && y1 > 0 && y1 < 100){
                            HgCircle(150,50,30);
                            masu[1][0] = 1;
                        }
                        if(x1 > 100 && x1 < 200 && y1 > 100 && y1 < 200){
                            HgCircle(150,150,30);
                            masu[1][1] = 1;
                        }
                        if(x1 > 100 && x1 < 200 && y1 > 200 && y1 < 300){
                            HgCircle(150,250,30);
                            masu[1][2] = 1;
                        }
                        if(x1 > 200 && x1 < 300 && y1 > 0 && y1 < 100){
                            HgCircle(250,50,30);
                            masu[2][0] = 1;
                        }
                        if(x1 > 200 && x1 < 300 && y1 > 100 && y1 < 200){
                            HgCircle(250,150,30);
                            masu[2][1] = 1;
                        }
                        if(x1 > 200 && x1 < 300 && y1 > 200 && y1 < 300){
                            HgCircle(250,250,30);
                            masu[2][2] = 1;
                        }
                    }
                }else{
                    event = HgEvent();
                    x1 = event->x;
                    y1 = event->y;

                    if(masu[j][k] != 1 &&  masu[j][k] != 2){
                        if(x1 > 0 && x1 < 100 && y1 > 0 && y1 < 100){
                            HgLine(20,20,80,80);
                            HgLine(20,80,80,20);
                            masu[0][0] = 2;
                        }
                        if(x1 > 0 && x1 < 100 && y1 > 100 && y1 < 200){
                            HgLine(20,120,80,180);
                            HgLine(20,180,80,120);
                            masu[0][1] = 2;
                        }
                        if(x1 > 0 && x1 < 100 && y1 > 200 && y1 < 300){
                            HgLine(20,220,80,280);
                            HgLine(20,280,80,220);
                            masu[0][2] = 2;
                        }
                        if(x1 > 100 && x1 < 200 && y1 > 0 && y1 < 100){
                            HgLine(120,20,180,80);
                            HgLine(120,80,180,20);
                            masu[1][0] = 2;
                        }
                        if(x1 > 100 && x1 < 200 && y1 > 100 && y1 < 200){
                            HgLine(120,120,180,180);
                            HgLine(120,180,180,120);
                            masu[1][1] = 2;
                        }
                        if(x1 > 100 && x1 < 200 && y1 > 200 && y1 < 300){
                            HgLine(120,220,180,280);
                            HgLine(120,280,180,220);
                            masu[1][2] = 2;
                        }
                        if(x1 > 200 && x1 < 300 && y1 > 0 && y1 < 100){
                            HgLine(220,20,280,80);
                            HgLine(220,80,280,20);
                            masu[2][0] = 2;
                        }
                        if(x1 > 200 && x1 < 300 && y1 > 100 && y1 < 200){
                            HgLine(220,120,280,180);
                            HgLine(220,180,280,120);
                            masu[2][1] = 2;
                        }
                        if(x1 > 200 && x1 < 300 && y1 > 200 && y1 < 300){
                            HgLine(220,220,280,280);
                            HgLine(220,280,280,220);
                            masu[2][2] = 2;
                        }
                    }
                }       
            }
        }
    }
    HgGetChar();
    HgClose();
    return 0;
}
