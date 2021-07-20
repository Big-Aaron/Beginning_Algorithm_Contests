//
// Created by test on 2021/7/21.
// 全篇核心解题方法，判断被除数是否双次出现
//
#include <stdio.h>
#include <string.h>

#define MaxSize 30000

int a, b;
int Remainder[MaxSize];//下标为被除数大小，数组值为出现的次序
int Quotient[MaxSize];//商数序列

int main() {
    while (scanf("%d/%d", &a, &b) == 2) {
        memset(Remainder, -1, sizeof(Remainder));

        int counter = 0;
        printf("%d/%d = %d.", a, b, a / b);
        a = a % b;
        a *= 10;
        while (Remainder[a] == -1) {
            Quotient[counter] = a / b;
            Remainder[a] = counter++;
            a %= b;
            a *= 10;
        }
        // repeating cycle start-position
        int sta_pos = Remainder[a];
        for (int i = 0; i < sta_pos; i++) {
            printf("%d", Quotient[i]);
        }
        printf("(");
        if (counter - sta_pos <= 50) {
            for (int i = sta_pos; i < counter; i++) {
                printf("%d", Quotient[i]);
            }
        } else {
            for (int i = sta_pos; i < sta_pos + 50; i++) {
                printf("%d", Quotient[i]);
            }
            printf("...");
        }
        printf(")\n");
        printf("   %d = number of digits in repeating cycle\n\n", counter - sta_pos);
    }
    return 0;
}

