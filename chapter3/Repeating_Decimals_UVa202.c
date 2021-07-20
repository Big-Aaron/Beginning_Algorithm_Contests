//
// Created by test on 2021/7/20.
// 全篇核心解题方法，无限不循环小数中不存在连续的3个循环节
//  方法有误，已更新第二种方案
//
#include "stdio.h"
#define A 3000
#define B 3000
int Decimals[A * B];//位数过多时，栈不给
int i = 0;//记录数组中现有的位数

//返回a/b的余数
int GetOneDecimal(int a, int b) {
    if (a % b == 0)return 0;
    else {
        a *= 10;
        Decimals[i++] = a / b;
        return a % b;
    }
}

int main() {
    int a, b;
    long j;//循环节位数
    int *p = Decimals;
    int *q = Decimals;//p为循环开始初指针，q为循环结束指针
    scanf("%d/%d", &a, &b);
    printf("%d.", a / b);
    a = GetOneDecimal(a%b, b);
    while (a % b) {
        a = GetOneDecimal(a, b);
        q++;
        j = q - p;
        j *= 2;
        while ((*p == *q) && (j > 0)) {
            a = GetOneDecimal(a, b);
            p++;
            q++;
            j--;
        }
        if (j == 0) {
            printf("(");
            for (i = 0; i < q - p; i++) {
                printf("%d", Decimals[i]);
            }
            printf(")\n%ld", q - p);
            return 0;
        }
        p = Decimals;
        q = &Decimals[i - 1];
    }
    for (i = 0; i <= q - p; i++) {
        printf("%d", Decimals[i]);
    }
    printf("(0)\n%d", 0);
    return 0;
}
