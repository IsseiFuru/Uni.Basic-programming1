#include<stdio.h>
#include<handy.h>

#define WIN 600
#define R 30

int main(){
    int x,y;
    int i,k;
    int layer;
    int xv,yv;

    HgOpen(WIN,WIN);
    layer = HgWAddLayer(0);
    HgLine(WIN/2,0,WIN/2,WIN);
    
    x = R + 5;
    y = R + 5;
    i = 0;
    k = 0;
    xv = 5;
    yv = 3;

    for(;;){
        HgLClear(layer);
        HgWCircle(layer,x,y,R);
        if(x <= 30){
            xv = 5;
        }
        if(y >= WIN - R){
            yv = -3;
        }
        if(x >= WIN - R){
            xv = -3;
        }
        if(y <= 30){
            yv = 3;
        }
        
        if(x >= 270 && x < 300 && i != 2){
            xv = -5;
            if(i >= 3){
                i = 0;
            }
            i++;
        }
        if(x > 300 && x <= 330 && k != 2){
            xv = 5;
            if(k >= 3){
                k = 0;
            }
            k++;
        }
        if(x == 550 && k > 2){
            k = 0;
        }
        if(x == 50 && i > 2){
            i = 0;
        }
        x += xv;
        y += yv;
        HgSleep(0.05);

    }
    return 0;
}
