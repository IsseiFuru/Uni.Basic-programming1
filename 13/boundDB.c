/*
    boundDB.c
    横に跳ね返る円、ダブルバッファリング版
    2019.7.2
*/
#include <stdio.h>
#include <handy.h>

#define WINDOWSIZE 400
#define RADIUS 50

int main() {
        int cx = 0;  // 円の中心座標
        int vx = 5;  // x方向の速度
        doubleLayer layers;  // ダブルバッファ用のデータ
        int windowID;  // ウィンドウの番号
        int layerID;  // レイヤーの番号

        windowID = HgOpen(WINDOWSIZE, WINDOWSIZE);
        layers = HgWAddDoubleLayer(windowID);  // ダブルバッファを作る

        for (;;) {
                layerID = HgLSwitch(&layers);  // 表示レイヤを入れ替える
                HgLClear(layerID);  // 描画用レイヤを消去する
                HgWCircle(layerID, cx, WINDOWSIZE / 2, RADIUS);  // 描画用レイヤに円を描く
                cx += vx;
                if (cx <= 0 || WINDOWSIZE <= cx) {
                        vx *= -1;
                }
                HgSleep(0.05);
        }

        // このプログラムは無限ループなので以下は不要だが念のため書いておく
        HgClose();
        return 0;
}
