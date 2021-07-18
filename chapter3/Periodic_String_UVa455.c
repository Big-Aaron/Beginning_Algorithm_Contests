//
// Created by test on 2021/7/18.
//
#include "stdio.h"
#include "string.h"
#define MaxSize 80
char str[MaxSize];

int main(void){
    scanf("%s",str);
    int len= strlen(str);
    char *p=str;
    char *q=str;
    _Bool flag;
    for(int i=1;i < len;i++){
        p=str;q=str;flag=1;
        if(len%i==0){
            q+=i;
            while (*q!='\0'){
                if(*p++==*q++);
                else {
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                printf("periodic is %d",i);
                return 0;
            }
        }
    }
    printf("periodic is %d",0);
    return 0;
}