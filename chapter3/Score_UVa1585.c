//
// Created by test on 2021/7/18.
//
#include "stdio.h"
#define MaxSize 80
char str[MaxSize];

int main(void){
    scanf("%s",str);
    char *p = str;
    char *q = str;
    int sum=0,counter=0;
    while((*q)!='\0'){
        if(*p == 'o' && *q == 'o'){
            counter++;
            sum+=counter;
            q++;
        } else{
            counter=0;
            q++;
            p=q;
        }
    }
    printf("%d",sum);
}