/*
  recurrence.c
  漸化式
  g1954237 古谷一晴
  2019.6.5
*/

#include<stdio.h>

int main(){
    int count;//カウンタ変数
    int repnum = 0;//繰り返し回数
    int a0 = 1;//a0

    do{
        printf("input number: ");
        scanf("%d", &repnum);
    }while(repnum < 0);//0以上のみ反応
    
    for(count = 0;count < repnum;count ++){
        printf("%d\n",a0);//表示
        int an = 3 * a0 +2;//計算
        a0 = an;
    }
    return 0;
}

            
        
        
