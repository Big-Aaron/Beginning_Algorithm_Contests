//
// Created by test on 2021/7/18.
//

#include "stdio.h"
#define MaxSize 10000
char str[MaxSize];

int main(void){
    scanf("%s",str);
    char *p=str;
    int counter[10]={[9]=0};
    while (*p!='\0'){
        counter[(*p)-'0']++;
        p++;
    }
    for(int i=0;i<10;i++){
        printf("%d has %d\n",i,counter[i]);
    }
}