/*
  GW.c
  最終課題:避けるゲーム
  g1954237 古谷一晴
*/

#include<stdio.h>
#include<handy.h>

#define WINDOWSIZE 600
#define R 30

int main(){
    hgevent *event;
    int key;//
    int jix,jiy;//操作する赤の円
    int x,y;//白い円
    int i,j,k;//カウンタ変数
    int ene1x,ene1y,ene1xv,ene1yv;//1つ目敵の赤の円
    int ene2x,ene2y,ene2xv,ene2yv;//2つ目敵の赤の円
    int ene3x,ene3y,ene3yv;//3つ目敵の赤の円
    int ene4x,ene4xv,ene4y;//4つ目敵の赤の円
    int ene5x,ene5y,ene5xv,ene5yv;//5つ目敵の赤の円
    int window;//ウィンドウ
    int sirolayer, jikilayer,enelayer;//レイヤー
    doubleLayer uraenelayer;//ダブルバッファ用のレイヤー

    window = HgOpen(WINDOWSIZE,WINDOWSIZE);
    HgSetEventMask(HG_KEY_DOWN);//キーを入力するイベント
    sirolayer = HgWAddLayer(0);
    jikilayer = HgWAddLayer(0);
    enelayer = HgWAddLayer(0);
    uraenelayer = HgWAddDoubleLayer(window);

    HgSetFont(HG_G,40);//文字のフォント
    HgText(145,300,"Plese Space key");
    for(;;){
        key = HgGetChar();
        if (key == ' ') break;//スペースキーでスタートする
    }
    HgClear();
    x = 240;
    y = 240;
    
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            HgWCircle(sirolayer,x,y,R);//白枠の円を描く
            x += 60;
        }
        y += 60;
        x = 240;
    }
    jix = 300;
    jiy = 300;
    ene1y = 60;
    ene1xv = 5;
    ene1yv = 3;//1こ目の敵の円
    ene2x = R;
    ene2y = WINDOWSIZE - R;
    ene2xv = 10;
    ene2yv = -12;//2こ目の敵の円
    ene3x = WINDOWSIZE / 2;
    ene3y = R;
    ene3yv = 8;//3こ目の敵の円
    ene4x = R;
    ene4xv = 10;
    ene4y = WINDOWSIZE / 2;//4こ目の敵の円
    ene5x = 540;
    ene5y = 540;
    ene5xv = -3;
    ene5yv = -5;//5こ目の敵の円
    
    k = 0;//入力回数

    HgWSetFillColor(jikilayer,HG_RED);
    HgWCircleFill(jikilayer,jix,jiy,R,1);//操作する赤い円を描く

    for(ene1x = 60;;ene1x += ene1xv){
        enelayer = HgLSwitch(&uraenelayer);
        HgLClear(enelayer);
        HgWSetFillColor(enelayer,HG_BLUE);
        HgWCircleFill(enelayer,ene1x,ene1y,R + 10,1);//1
        if(ene1x >= WINDOWSIZE - R - 10){//右側の壁
            ene1xv = -5;
        }if(ene1x <= R + 10){//左側の壁
            ene1xv = 5;
        }if(ene1y >= WINDOWSIZE - R - 10){//上側の壁
            ene1yv = - 3;
        }if(ene1y <= R + 10){//下側の壁
            ene1yv = 3;
        }
        ene1y += ene1yv;//yに速度をたす
        if(k >= 10){//10回動かした時
            HgWCircleFill(enelayer,ene2x,ene2y,R,1);//2
            if(ene2x >= WINDOWSIZE - R){//右側の壁
                ene2xv = -10;
            }if(ene2x <= R){//左側の壁
                ene2xv = 10;
            }if(ene2y >= WINDOWSIZE - R){//上側の壁
                ene2yv = -12;
            }if(ene2y <= R){//下側の壁
                ene2yv = 12;
            }
            ene2x += ene2xv;
            ene2y += ene2yv;
        }
        if(k >= 20){//20回動かした時
            HgWCircleFill(enelayer,ene3x,ene3y,R,1);//3
            if(ene3y >= WINDOWSIZE - R){//上側の壁
                ene3yv = -8;
            }if(ene3y <= R){//下側の壁
                ene3yv = 8;
            }
            ene3y += ene3yv;
            }
        if(k >= 30){//30回目
            HgWCircleFill(enelayer,ene4x,ene4y,R,1);
            if(ene4x >= WINDOWSIZE - R){//右側の壁
                ene4xv = -10;
            }if(ene4x <= R){//左側の壁
                ene4xv = 10;
            }
            ene4x += ene4xv;
            }
            if(k >= 40){//40回目
            HgWCircleFill(enelayer,ene5x,ene5y,R + 20,1);
            if(ene5x >= WINDOWSIZE - R - 20){//右側の壁
                ene5xv = -3;
            }if(ene5x <= R + 20){//左側の壁
                ene5xv = 3;
            }if(ene5y >= WINDOWSIZE - R - 20){//上側の壁
                ene5yv = -5;
            }if(ene5y <= R + 20){//下側の壁
                ene5yv = 5;
            }
            ene5x += ene5xv;
            ene5y += ene5yv;
        }
        HgSleep(0.05);
        event = HgEventNonBlocking();
        if(event!= NULL){
            if(event->type==HG_KEY_DOWN){
                key=event->ch;
                if(key == HG_U_ARROW && jiy < 360){
                jiy += 60;
                }if(key == HG_D_ARROW && jiy > 240){
                    jiy -= 60;
                }if(key == HG_L_ARROW && jix > 240){
                    jix -= 60;
                }if(key == HG_R_ARROW && jix < 360){
                    jix += 60;
                }
            }
        HgLClear(jikilayer);
        HgWSetFillColor(jikilayer,HG_RED);
        HgWCircleFill(jikilayer,jix,jiy,R,1);//操作する赤い円を描く
        HgSleep(0.05);
        k++;
        }
        
        if(jix<ene1x+R+10&&jix>ene1x-R-10&&jiy<ene1y+R+10&&jiy>ene1y-R-10) break;
        if(jix<ene2x+R&&jix>ene2x-R&&jiy<ene2y+R&&jiy>ene2y-R) break;
        if(jix<ene3x+R&&jix>ene3x-R&&jiy<ene3y+R&&jiy>ene3y-R) break;
        if(jix<ene4x+R&&jix>ene4x-R&&jiy<ene4y+R&&jiy>ene4y-R) break;
        if(jix<ene5x+R+20&&jix>ene5x-R-20&&jiy<ene5y+R+20&&jiy>ene5y-R-20) break;
    }
    HgSleep(1);
    HgClear();
    HgSetFont(HG_G,40);//文字のフォント
    HgText(145,300,"GAMEOVER");
    HgText(145,250,"score:%d回",k);
    for(;;){
        key = HgGetChar();
        if (key == ' ') break;//スペースキーで反応する
    }
    HgClose();
}
