//
// Created by test on 2021/5/23.
//

#include "stdio.h"
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        //四年一闰，百年不闰，四百年在闰。
        printf("yes");
    } else{
        printf("no");
    }
}