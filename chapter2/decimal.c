//
// Created by test on 2021/5/23.
//

#include "stdio.h"
#include "math.h"
int main(){
    int i,a,b,c;
    int Case=0;
    int decimal;
    while (scanf("%d%d%d",&a,&b,&c) && a && b && c){
        printf("Case %d: %d.",++Case,a/b);//输出整数部分
        for (i = 1; i < c; i++) {//decimal part
            a = a * 10;
            decimal = a / b ;
            printf("%d", decimal % 10);
        }
        decimal=round((double)a*10/b);
        printf("%d\n", decimal % 10);
    }

}