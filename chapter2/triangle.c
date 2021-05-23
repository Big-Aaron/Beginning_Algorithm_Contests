//
// Created by test on 2021/5/23.
//

#include "stdio.h"
int main(){
    int n,i,j,num=0;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=0;j<num;j++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("#");
        }
        num++;
        printf("\n");
    }
}