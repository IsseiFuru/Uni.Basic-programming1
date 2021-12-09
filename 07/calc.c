/*
  calculation
  Issei Furutani 2019.5.16
*/

#include<stdio.h>

int main(){
    int number1;
    int number2;
    
    printf("input 1st number: ");
    scanf("%d", &number1);
    
    printf("input 2nd numbee: ");
    scanf("%d", &number2);

    int wa = number1 + number2;
    int sa = number1 - number2;
    int seki = number1 * number2;
    int syou = number1 / number2;
    
    printf("%d + %d = %d\n",number1,number2,wa);//和
    printf("%d - %d = %d\n",number1,number2,sa);//差
    printf("%d * %d = %d\n",number1,number2,seki);//積
    printf("%d / %d = %d\n",number1,number2,syou);//商]
    

    return 0;
    
}
