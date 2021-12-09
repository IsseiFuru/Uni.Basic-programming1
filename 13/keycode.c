/*
keycode.c
押したキーの値を表示する
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
        if(key == ' ')break;
    }
    HgClose();
    return 0;
}
