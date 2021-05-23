//
// Created by test on 2021/5/23.
//

#include "stdio.h"
int main(){
    int num,total;
    scanf("%d",&num);
    total=num*95;
    if (total>300){
        printf("%.2f",(float )total*0.85);
    } else{
        printf("%d",total);
    }
}