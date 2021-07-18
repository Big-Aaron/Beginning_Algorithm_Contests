//
// Created by test on 2021/7/18.
//

#include "stdio.h"
#define MaxSize 80
char str[MaxSize];

int isNum(const char * c){
    if(*c >= '0' && *c <= '9')return *c-'0';
    else return 1;
}
int main(void){
    scanf("%s",str);
    char *p=str,*q=str+1;
    double Mass=0;
    while(*p!='\0') {
        switch (*p) {
            case 'C':
                Mass += 12.01 * isNum(q);
                break;
            case 'H':
                Mass += 1.008 * isNum(q);
                break;
            case 'O':
                Mass += 16.00 * isNum(q);
                break;
            case 'N':
                Mass += 14.01 * isNum(q);
                break;
            default:
                break;
        }
        p++;q++;
    }
    printf("%.3lf g/mol",Mass);
}