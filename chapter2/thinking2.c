//
// Created by test on 2021/5/23.
//
#include "stdio.h"
int main(){
    double i;
    for(i=0;i!=10;i+=0.1){
        //Loop induction expression should not have floating-point type
        printf("%.1f\n",i);
    }

    return 0;
}
