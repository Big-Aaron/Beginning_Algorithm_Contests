//
// Created by test on 2021/7/18.
//

#include "stdio.h"

#define MaxSize 100
char plot[5][5] = {{'T', 'R', 'G', 'S', 'J'},
                   {'X', 'D', 'O', 'K', 'I'},
                   {'M', ' ', 'V', 'L', 'N'},
                   {'W', 'P', 'A', 'B', 'E'},
                   {'U', 'Q', 'H', 'C', 'F'}};
char order[MaxSize];
int Movespare(char c) {//没有处理逻辑错误
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (plot[i][j] == ' ') {
                switch (c) {
                    case 'A':
                        plot[i][j] = plot[i - 1][j];
                        plot[i - 1][j] = ' ';
                        break;
                    case 'B':
                        plot[i][j] = plot[i + 1][j];
                        plot[i + 1][j] = ' ';
                        break;
                    case 'L':
                        plot[i][j] = plot[i][j - 1];
                        plot[i][j - 1] = ' ';
                        break;
                    case 'R':
                        plot[i][j] = plot[i][j + 1];
                        plot[i][j + 1] = ' ';
                        break;
                    default:
                        printf("This puzzle has no final configuration.");
                }
                return 0;//该死的忘记了
            }
        }
    }
}

int main() {
    scanf("%s", order);
    char *p = order;
    while (*p != '0') {
        Movespare(*p++);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c\t", plot[i][j]);
        }
        printf("\n");
    }
}
