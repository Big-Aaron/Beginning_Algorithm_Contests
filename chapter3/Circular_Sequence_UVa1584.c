//
// Created by test on 2021/7/17.
//
#include "stdio.h"
#include "string.h"
#define MaxSize 100
char str[MaxSize];

int less(const char str[MaxSize],int i,int j ){
    int len = strlen(str);
    for(int k=0;k<len;k++){
        if(str[(i+k)%len]!=str[(j+k)%len])
            return str[(i+k)%len]<str[(j+k)%len];
    }
    return 0;//相等
}
int main(void){
    while(scanf("%s",str)) {
        int i, min = 0, len = strlen(str);
        for (i = 0; i < len; i++) {
            if (less(str, i, min))min = i;
        }
        for (i = 0; i < len; i++) {
            printf("%c", str[(min + i) % len]);
        }
        putchar('\n');
    }
    return 0;

}
