//
// Created by test on 2021/7/18.
//
#include "stdio.h"

#define r 6
#define c 7
#define bug (-1)
char plot[r][c] = {{[3]=bug},
                   {[0]=bug, [3]=bug},
                   {[4]=bug},
                   {[2]=bug},
                   {[0]=bug, [3]=bug, [6]=bug},
                   {[3]=bug}};

int printPlot(char p){
    if(p==-1)printf("*");
    else if(p==0)printf("_");
    else printf("%d",p);
}
int findOutset() {
    char counter = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (plot[i][j] == bug)continue;
            if (i - 1 < 0 || j - 1 < 0) {//上边界或左边界
                plot[i][j] = ++counter;
            } else if (plot[i][j - 1] == bug || plot[i - 1][j] == bug) {
                plot[i][j] = ++counter;
            }
        }
    }
}

int showPlot() {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printPlot(plot[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");
}

int findAcross() {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (plot[i][j] > 0 && plot[i][j] <= r * c) {
                for(int k=0;plot[i][j+k]!=-1&&j+k<c;k++){
                    printPlot(plot[i][j+k]);
                }
                printf("\t");
            }
        }
    }
    printf("\n");
}

int findDown(){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (plot[i][j] > 0 && plot[i][j] <= r * c) {
                for(int k=0;plot[i+k][j]!=-1&&i+k<r;k++){
                    printPlot(plot[i+k][j]);
                }
                printf("\t");
            }
        }
    }
    printf("\n");
}

int main() {
    findOutset();
    showPlot();
    findAcross();
    findDown();
}