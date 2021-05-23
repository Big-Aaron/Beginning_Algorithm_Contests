//
// Created by test on 2021/5/23.
//
#include "stdio.h"
int main(){
    int i,a,b,c;
    for (i=100;i<=999;i++){
        a = i/100;
        b = i/10%10;
        c = i%10;
        if (i==a*a*a+b*b*b+c*c*c){
            printf("%d\t",i);
        }
    }
}